#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum +=nums[i];
            vec.push_back(sum);
        }
        return vec;
    }
};

int main()
{
vector<int> vec {1,2,3,4};

Solution s;

vector<int> ans = s.runningSum(vec);

for(auto x : ans)
    cout<< x <<endl;


    return 0;
}