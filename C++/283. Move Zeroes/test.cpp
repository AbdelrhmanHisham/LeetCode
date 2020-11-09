#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;
        int current_profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i; j < prices.size(); j++)
            {
                current_profit = prices[j] - prices[i];
                if (max_profit < current_profit)
                {
                    max_profit = current_profit;
                }
            }
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