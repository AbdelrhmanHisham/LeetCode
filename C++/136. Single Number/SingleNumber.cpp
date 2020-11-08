#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int num = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            num ^= nums[i];
        }
        return num;
    }
};

int main()
{
    vector<int> vec{1, 1, 2};
    Solution s;
    cout << s.singleNumber(vec);

    return 0;
}