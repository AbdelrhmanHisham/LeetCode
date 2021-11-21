#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int start = 0;
        int end = numbers.size() - 1;
        vector<int> vec;
        while (start < end)
        {
            int total = numbers[start] + numbers[end];
            if (total == target)
            {
                vec.push_back(start + 1);
                vec.push_back(end + 1);
                break;
            }

            if (total < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }


        return vec;
    }
};

int main()
{
    Solution _Solution;

    vector<int> vec{2, 7, 11, 15};
    vector<int> ans;

    int target = 9;

    ans = _Solution.twoSum(vec, target);
    for (auto v : ans)
    {
        cout << v << ",";
    }
    cout << endl;

    return 0;
}