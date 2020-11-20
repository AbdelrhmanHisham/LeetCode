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

        auto it = ++Map.begin();
        auto it_1 = Map.begin();
        int value = 0;
        int unique = 0;
        bool loop = false;
        int counter = 0;
        indices[it_1->second] = unique;
        unique++;
        while (it_1 != Map.end() && it != Map.end())
        {
            it = ++it_1;
            while (it_1->first == it->first)
            {
                indices[it->second] = indices[it_1->second];
                it++;
            }
            
            it_1++;
            unique++;
        }

        // indices[it_1->second] = unique;
        // unique++;
        // while (it != Map.end())
        // {
        //     // cout<<"Outter"<<endl;
        //     while (it->first == (it_1)->first)
        //     {
        //         indices[it->second] = value;
        //         indices[it_1->second] = value;
        //         it++;
        //         it_1++;
        //         unique++;
        //         // cout<<"Inter"<<endl;
        //         loop = true;
        //     }

        //     if (loop)
        //     {
        //         unique++;
        //         loop = false;
        //         continue;
        //     }

        //     indices[it->second] = unique;
        //     it++;
        //     it_1++;
        //     value++;
        //     unique++;

        //     for (int i = 0; i < indices.size(); i++)
        //     {
        //         printf("|%d|", indices[i]);
        //     }
        //     printf("Loop : %d\n", counter++);
        //     printf("Uni : %d  Value : %d \n", unique, value);
        // }

        return indices;
    }
};

int main()
{

    Solution s;
    // vector<int> nums {8,1,2,2,3};
    vector<int> nums{6, 5, 4, 8};
    vector<int> vec = s.smallerNumbersThanCurrent(nums);

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    return 0;
}