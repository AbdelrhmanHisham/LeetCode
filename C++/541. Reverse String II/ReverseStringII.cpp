#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
     
        string str;
        int start = 0;
        int end = s.size() - 1;
        int i =0;
        int n =1;
        while (n >= )
        {
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

    vector<char> vec{'A', 'B'};
    Solution s;
    s.reverseString(vec);
    for (auto s : vec)
        cout << s << endl;
    return 0;
}
