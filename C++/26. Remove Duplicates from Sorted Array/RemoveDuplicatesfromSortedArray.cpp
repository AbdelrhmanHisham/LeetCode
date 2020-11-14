#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0 )return 0;
        int size = 0;
        int All_size = nums.size();
        auto it = nums.begin();
        bool clear = false;
        for (int i = 0; i < nums.size() -1 ; i++)
        {
          
            if (nums[i] == nums[i + 1])
            {
                size++;
                nums.erase(it + i);
                i--;
            }
        }

        return All_size - size;
    }
};


int main()
{
    vector<int> vec{0,0,1,1,1,2,2,3,3,4};

    Solution s;
    s.removeDuplicates(vec);
    // cout << "New size : " << s.removeDuplicates(vec) << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    cout << endl;

    return 0;
}


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         return unique(nums.begin(),nums.end()) - nums.begin();
//     }
// };