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


        int max_profit = 0;

        int i = 0;
        int valley = prices[0];
        int peak = prices[0];

        while (i < prices.size()-1)
        {
            while (i < prices.size()-1 && prices[i] >= prices[i + 1])
            {
                i++;
            }
            valley = prices[i];

            while (i < prices.size()-1 && prices[i] <= prices[i + 1])
            {
                i++;
            }
            peak = prices[i];

            max_profit += peak - valley;
        }

        return max_profit;
    }
};


int main()
{
    vector<int> vec{7, 1, 5, 3, 6, 4};

    Solution s;
    cout << s.maxProfit(vec);
    return 0;
}



