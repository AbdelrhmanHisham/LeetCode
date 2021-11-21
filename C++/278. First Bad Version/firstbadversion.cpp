// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <vector>
#include <iostream>
using namespace std;

bool isBadVersion(int n)
{
    if (n >= 2)
    {
        return true;
    }
    return false;
}

class Solution {
public:
    int firstBadVersion(int n) 
    {
        if (n==1 || isBadVersion(1))return 1;
        int bad_version = binarySearch( 0 , n);
        return bad_version;
    }

private:
int binarySearch(int l , int r)
{
    while(r >= l)
    {
        int mid = l + (r-l)/2;     
        if(isBadVersion(mid+1) == true)
        {
          if(isBadVersion(mid) == false)  
            return mid+1;
            r = mid-1;            
        }

        if (isBadVersion(mid+1) == false)
        {
            l = mid+1;
        }
    }
    return -1;
}
};




int main()
{
    Solution _Solution;
    cout<<"First Bad Version : "<<_Solution.firstBadVersion(4)<<endl;

return 0;
}