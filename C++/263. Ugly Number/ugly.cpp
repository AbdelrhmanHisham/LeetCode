#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Solution
{

public:
    bool isUgly(int num)
    {
        if (num == 1)
        {
            return true;
        }
        if (num == 0)
        {
            return false;
        }

        int i = 0;
        bool enter = false;
        while (num != 0)
        {
            if (num % 30 == 0)
            {
                num /= 30;
                enter = true;
            }

            else if (num % 15 == 0)
            {
                num /= 15;
                enter = true;
            }

            else if (num % 10 == 0)
            {
                num /= 10;
                enter = true;
            }

            else if (num % 6 == 0)
            {
                num /= 6;
                enter = true;
            }

            else if (num % 5 == 0)
            {
                num /= 5;
                enter = true;
            }

            else if (num % 3 == 0)
            {
                num /= 3;
                enter = true;
            }
            else if (num % 2 == 0)
            {
                num /= 2;
                enter = true;
            }

            if (!enter)
            {
                return false;
            }
            enter = false;
            if (num == 1)
                return true;
            cout << num << endl;
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isUgly(10);
    return 0;
}