#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        set<int> Set_i;
        set<int> Set_j;
        int counter = 0;
        int corupted_num = 0;
        int error = 0;
        int j;
        int old = nums.size();

        for (int i = 0; i < (nums.size() - 1); i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    Set_i.insert(i);
                    Set_j.insert(j);
                    if (Set_j.size() != Set_i.size())
                    {
                        Set_i.erase(i);
                    }
                    else
                    {
                        error++;
                        break;
                    }

                }
            }
            error = 0;
        }
        Set_i.insert(nums.size());
        Set_j.insert(nums.size());
        if (Set_i.size() > 2)
        {
            return false;
        }

        return true;
    }
};

int main()
{
    // vector<int> vec{5, 7, 1, 8};
    // vector<int> vec{4, 2, 3};
    // vector<int> vec{4, 2, 1};

    // vector<int> vec{-1, 4, 2, 3};
    // vector<int> vec{3, 4, 2, 3};
    Solution s;
    bool state = s.checkPossibility(vec);
    if (state)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}