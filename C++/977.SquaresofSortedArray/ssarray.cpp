#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &nums)
//     {
//         vector<int> vec;
//         multimap<int,int> _map;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int value = nums[i] * nums[i];
//             _map.insert(pair<int,int> (value , 0));
//         }
//         for (auto m : _map)
//         {
//             vec.push_back(m.first);
//         }

//         return vec;
//     }
// };

// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &nums)
//     {
//         vector<int> result (nums.size() , 0);
//         int start = 0;
//         int end = nums.size() - 1;
//         int pos = nums.size() - 1;


//         while (start <= end)
//         {
//             int num_1 = nums[start] * nums[start]; 
//             int num_2 = nums[end] * nums[end];

//             if (num_1 <= num_2)
//             {
//                 result[pos] = num_2;
//                 end--;
//                 pos--;
//             }else
//             {
//                 result[pos] = num_1;
//                 start++;
//                 pos--;              
//             } 

//         }

//         return result;

//     }
// };


class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> vec;
        multimap<int,int> _map;
        for (int i = 0; i < nums.size(); i++)
        {
            // int value = nums[i] * nums[i];
            // _map.insert(pair<int,int> (value , 0));
            vec.push_back(nums[i] * nums [i]);
        }
        sort(vec.begin() , vec.end() , less<int>());
        return vec;
    }
};

int main()
{
    vector<int> vec{-4, -1, 0, 3, 10};
    Solution _Solution;
    vector<int> vec2 = _Solution.sortedSquares(vec);

    for (auto v : vec2)
    {
        cout << v << " ";
    }
    cout << endl;
}