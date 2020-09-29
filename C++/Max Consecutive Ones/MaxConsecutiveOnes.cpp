#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int sum = 0;
        int old = 0;
        // set<int> freq;
        map<int,int> freq;
        for(auto num : nums){
            sum +=num;
            if(old == sum){
                // freq.insert(sum);
                freq.insert(pair<int,int> (sum,num));
                sum =0;
            }
             old =sum;
        }  
    //    freq.insert(sum);
freq.insert(pair<int,int> (sum,*(--nums.end())));

        return (--freq.end())->first;
    }
};

int main(){
    Solution s;
    vector<int> nums {1};

    int num = s.findMaxConsecutiveOnes(nums);
    cout<<num<<endl;
    return 0;
}