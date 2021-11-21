#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i, j;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                break;
        }

        j = i + 1;
        while (j < nums.size())
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};
// class Solution
// {
// public:
//     void moveZeroes(vector<int> &nums)
//     {
//         int start = 0;
//         int end = nums.size()-1;

//         for (int i = 0; i < end; i++)
//         {
//             if (nums[i] == 0)
//             {
//                 start = i;
//                 while (start < end)
//                 {
//                     swap(nums[start], nums[start+1]);
//                     start++;
//                 }
//                 end--;
//             }

//             if (nums[i] == 0)
//             {
//                 i--;
//             }
//         }
//     }
// };

int main()
{
    // [0,1,0,3,12]
    // vector<int> vec{0,1,0,3,12};
    // vector<int> vec{1, 3, 0, 0, 12};
    // vector<int> vec{0, 1, 0, 1};

    vector<int> vec{0, 0, 1};

    Solution s;
    s.moveZeroes(vec);
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ,";
    }
    cout << endl;
    return 0;
}
