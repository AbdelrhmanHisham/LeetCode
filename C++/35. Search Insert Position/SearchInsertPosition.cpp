#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(target==nums[mid])return mid;//this line is redundant, 
            if(target>nums[mid]) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
		//or even just by using lower_bound() method from STL we can findout this solution!
        // return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};
int main()
{
    vector<int> vec{1,3,5,6};
    // [1,2,4,6,7]
    // 3

    // [1,3,5,6]
    // 7
    Solution _Solution;
    int index = _Solution.searchInsert(vec, 7);
    cout << "Index : " << index << endl;

    return 0;
}