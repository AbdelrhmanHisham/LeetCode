#include <iostream>
#include <vector>
#include <stdexcept>
#include <map>



using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    multimap<int,int> Map;
    vector<int> indices;

        for(int i = 0 ; i < nums.size() ; i++){
            Map.insert(pair<int,int> (nums[i] , i));
        }

        for(int i =0 ; i < nums.size() ; i++){
            int comp = target - nums[i]; 
            auto st = Map.find(nums[i]); 
            Map.erase(st);
            auto it = Map.find(comp);

            if (it != Map.end())
            {
                indices.push_back(i);
                indices.push_back(it->second);
                return indices;
            }
            Map.insert(pair<int,int> (nums[i],i));
        }
        throw invalid_argument("Target not found");
        
        }
};




int main(){

    vector<int> nums {3,2,4};
    // vector<int> nums {3,3};
    Solution s;
    vector<int> vec = s.twoSum(nums,6);
    for (int i=0 ; i < vec.size() ; i++){
        cout<<vec[i];
        cout<<endl;
    }
    return 0;
}