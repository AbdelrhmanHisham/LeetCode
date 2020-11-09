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

int main()
{
    vector<int> vec{1,3,0,0,12};
    // vector<int> vec{0, 1, 0, 1};
    Solution s;
    s.moveZeroes(vec);
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    return 0;
}
