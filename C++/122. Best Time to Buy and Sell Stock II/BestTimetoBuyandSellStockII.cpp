#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <map>
using namespace std;
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int max_profit = 0;
//         int current_profit = 0;
//         vector<int> profits;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             for (int j = i; j < prices.size(); j++)
//             {
//                 current_profit = prices[j] - prices[i];
//                 if (max_profit < current_profit)
//                 {
//                     max_profit = current_profit;
//                 }
//             }

//         }
//         return max_profit;
//     }
// };

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() <= 1)
        {
            return 0;
        }
        else
        {
            int profit = 0;
            int min_buy= prices[0]; 
            for (int i = 1; i < prices.size(); i++)
            {

                profit = max(profit, prices[i] - min_buy);
                min_buy = min(min_buy, prices[i]);

                cout<<"Profit : "<<profit<<endl;

            }
            return profit;
        }
    }

};


// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int current_profit = 0;
//         vector<int> profits;
//         int current_size = prices.size()-1;
//         int patch = 1;
//         int i =0;
//         while (current_size > patch)
//         {
//             current_profit = prices[i] -prices[i+patch] 
//             if (prices[i])
//             {
//                 /* code */
//             }
            
//         }
        
//         return max_profit;
//     }
// };



int main()
{
    vector<int> vec{7, 1, 5, 3, 6 , 4};

    Solution s;
    cout << s.maxProfit(vec);
    return 0;
}