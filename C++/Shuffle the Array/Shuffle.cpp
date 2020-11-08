#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        for(int i = 0 ; i < nums.size()/2 ; i++)
        {
            vec.push_back(nums[i]);
            vec.push_back(nums[i + n]);
        }
        return vec;
    }
};

int main(){
    vector<int> vec {1,2,3,4,4,3,2,1};
    int n = 4;

    Solution s;
    vector<int> ans = s.shuffle(vec , n);

    for(auto v : ans)
        cout<<v<<endl;
    return 0;
}