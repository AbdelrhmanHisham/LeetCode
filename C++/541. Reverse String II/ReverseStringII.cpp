#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {

        string str = s;
        int size = s.size();
        int curent_size = size;
        int i = 0;
        int n = 1;
        int src, dest;
        while (curent_size >= 2 * k)
        {
            src = i;
            dest = (i + k-1);
            while (dest > src)
            {
            swap_char(str[src], str[dest]);
            src++;
            dest--;
            }
            
            curent_size -= 2 * k;
            i += 2 * k;
        }
        if (curent_size < 2 * k && curent_size >= k)
        {
            //reverse k elemnts
            src = i;
            dest = (i + k-1);
            while (dest > src)
            {
                //reverse k

                swap_char(str[src], str[dest]);
                src++;
                dest--;
            }
        }
        if (curent_size < k)
        {
            src = i;
            dest = size - 1;
            while (dest > src)
            {
                //reverse all

                swap_char(str[src], str[dest]);
                src++;
                dest--;
            }
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

    string shika = "abcdef";
    Solution s;
    shika = s.reverseStr(shika, 3);
    cout << shika << endl;
    return 0;
}
