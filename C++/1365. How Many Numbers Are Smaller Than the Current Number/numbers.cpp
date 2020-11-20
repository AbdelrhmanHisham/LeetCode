#include <vector>
#include <iostream>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> indices(nums.size(), 0);
        multimap<int, int> Map;

        for (int i = 0; i < nums.size(); i++)
        {
            Map.insert(pair<int, int>(nums[i], i));
            // Map[i] =nums[i];
        }

        for (auto it = Map.begin(); it != Map.end(); it++)
        {
            printf("|%d| --> |%d| \n", it->first, it->second);
        }

        auto it = Map.begin();
        int value = 0;
        int unique = 0;
        int old_value = 0;
        int current_value = 0;
        while (it != Map.end())
        {
            indices[it->second] = value;
            value++;
            it++;
        }
        it = Map.begin();
        auto it_1 = Map.begin();
        it_1++;
        while (it_1 != Map.end())
        {
            
            if (it->first == it_1->first)
            {
                indices[it_1->second] = indices[it->second];
                
            }

            it++;
            it_1++;
        }
     
        return indices;
    }
};

int main()
{

    Solution s;
    vector<int> nums{5, 0, 10, 0, 10, 6};
    // vector<int> nums{8, 1, 2, 2, 3};
    // vector<int> nums{6, 5, 4, 8};
    vector<int> vec = s.smallerNumbersThanCurrent(nums);

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    return 0;
}