#include <vector>
#include <iostream>
#include <set>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
//     bool containsDuplicate(vector<int> &nums)
//     {
//         set<int> Set;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (Set.find(nums[i]) != Set.end())
//             {
//                 return true;
//             }else
//             {
//                 Set.insert(nums[i]);
//             }
            
            
//         }
//         return false;
//     }
// };


bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return false;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int f[maxi-mini+1];
        cout<<"Min : "<<mini<<" Maxi : "<<maxi<<endl;
        memset(f,0,sizeof(f));
        for(int i=0;i<n;i++)
        {
            f[nums[i]-mini]++;
            for (int i = 0; i < (maxi-mini+1); i++)
            {
                printf("|%d|",f[i]);
            }
            // cout<<"Min : "<<mini<<" Maxi : "<<maxi<<endl;

            cout<<endl;
            
            if(f[nums[i]-mini]>1)
                return true;
        }
        return false;
    }

    };


int main()
{
    vector<int> vec {1,2,3,3,4};

    Solution s;
    cout<<s.containsDuplicate(vec);
    return 0;
}

