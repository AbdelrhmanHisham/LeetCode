#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> Set;

        for (int i = 0; i < nums.size(); i++)
        {
            if (Set.find(nums[i]) != Set.end())
            {
                return false;
            }else
            {
                Set.insert(nums[i]);
            }
            
            
        }
        return true;
    }
};

int main()
{
    return 0;
}