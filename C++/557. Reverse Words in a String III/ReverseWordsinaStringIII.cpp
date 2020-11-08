#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        string str = s;
        int i = 0;
        vector<int> vec;
        while (s[i] != '\0')
        {
            if (s[i] == ' ')
            {
                vec.push_back(i);
                cout<<"space : "<<i<<endl;
            }
            i++;
        }
        vec.push_back(s.size());

        i = 0;
        int src = 0;
        int dest = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            dest = vec[i] - 1;
            cout << "dest : " << dest << " Src : " << src << endl;
            while (dest > src)
            {
                swap_char(str[dest], str[src]);
                dest--;
                src++;
            }

            src = vec[i] + 1;
        }
        return str;
    }

private:
    void swap_char(char &ch1, char &ch2)
    {
        ch1 = ch1 + ch2;
        ch2 = ch1 - ch2;
        ch1 = ch1 - ch2;
    }
};

int main()
{
    Solution s;
    
    string ans = s.reverseWords("Let's take LeetCode contest");
    cout<<"Let's take LeetCode contest"<<endl;
    cout << ans;
    return 0;
}