#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    int maxPower(string s)
    {

        set<int> power;
        char old = s.at(0);
        string holder = "";

        for (auto x : s)
        {

            if (x == ' ')
            {
                continue;
            }
            if (x != old)
            {
                power.insert(holder.length());
                holder = "";
            }
            holder += x;
            old = x;
        }
        power.insert(holder.length());
        return *(--power.end());
    }
};

int main()
{

    Solution s;
    int shika = s.maxPower("  adafaf ");

    cout << shika << endl;
    return 0;
}