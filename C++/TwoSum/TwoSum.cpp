#include <iostream>
#include <vector>
#include <stdexcept>
#include <map>





using namespace std;
//*Using Loops O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> indices;

        for (int i =0 ; i< nums.size() ; i++){
            for (int j = i+1; j < nums.size(); j++)
            {
                if((nums[i] + nums[j]) == target){
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
            
        }
        throw invalid_argument("Target not found");  
        }
};


int main(){

    vector<int> nums {3,2,4};
    // vector<int> nums  {3,3};
    Solution s;
    vector<int> vec = s.twoSum(nums,6);
    for (int i=0 ; i < vec.size() ; i++){
        cout<<vec[i];
        cout<<endl;
    }
    return 0;
}