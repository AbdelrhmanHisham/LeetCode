#include <string>
#include <iostream>

#include <sstream>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        bool pattern = false;
        int n = s.size();
        if (n <= 1)
            return pattern;

        string holder;
        stringstream ss;
        for (int i = n / 2; i > 0; i--)
        {
            if (n % i == 0)
            {
                int multiples = n / i;
                holder = s.substr(0, i);
                string shika;
                for (int i = 0; i < multiples; i++)
                {
                    shika += holder;
                }

                if (s == shika)
                {
                    return true;
                }
            }
        }

        return pattern;
    }
};

int main()
{
    Solution s;
    string str = "abcabcabc";
    cout << s.repeatedSubstringPattern(str);
    return 0;
}


