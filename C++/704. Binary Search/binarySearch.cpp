#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int index = -1;
        int middle_index = nums.size()/2;
        index = binarySearch(nums,0,nums.size()-1 , target);

        return index;
    }

private:
    int binarySearch(vector<int> vec , int l , int r , int x)
    {
        if (r >= l)
        {
            int mid = l + (r-l) / 2;

            if(vec[mid] == x)return mid;


            if(vec[mid] > x)return binarySearch(vec , l , mid-1 , x);
            if(vec[mid] < x)return binarySearch(vec ,mid+1, r , x);

        }else
        {
            return -1;
        }
    }
};



int main()
{
    Solution _Solution;
    vector<int> vec {-2,-1,0,1,3,5,7,9,10,20,25,100,103,150,200};

    cout<<"Target exsits at index : "<<_Solution.search(vec , -2)<<endl;
    return 0;
}