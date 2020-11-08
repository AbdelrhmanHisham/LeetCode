#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int end = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[end]);
                end--;
                for (int i = 0; i < nums.size(); i++)
                {
                    cout << nums[i] << endl;
                }
                    cout << "             " << endl;

            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << endl;
        }
        int size_of_zeros = nums.size() - 1 - end;

        //sort_heap(nums.begin(), nums.end() - size_of_zeros);
    }

private:
    void swap(int &num_1, int &num_2)
    {
        num_1 = num_1 + num_2;
        num_2 = num_1 - num_2;
        num_1 = num_1 - num_2;
    }
};

int main()
{
    vector<int> vec{0, 1, 0, 3, 12};
    Solution s;
    s.moveZeroes(vec);
    cout << "             " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    return 0;
}