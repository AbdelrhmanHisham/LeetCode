#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <map>
using namespace std;

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



int main()
{
    vector<int> vec{7, 1, 5, 3, 6 , 4};

    Solution s;
    cout << s.maxProfit(vec);
    return 0;
}