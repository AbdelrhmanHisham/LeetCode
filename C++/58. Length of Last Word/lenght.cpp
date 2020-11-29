#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        if (s == " ")
        {
            return 0;
        }

        int len = 0;
        bool enter = false;
        for (int i = 0; i < s.size(); i++)
        {

            enter = false;
            while (s[i] == ' ')
            {
                i++;
                if (i >= s.size())
                {
                    return len;
                }
                enter = true;
            }
            if (!enter)
            {
                len++;
            }
            else
            {
                len = 0;
                --i;
            }
        }

        return len;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord("a ");
    return 0;
}