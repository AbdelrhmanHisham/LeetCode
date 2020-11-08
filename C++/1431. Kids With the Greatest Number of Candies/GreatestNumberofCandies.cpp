#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> state;
        int max = 0;
        int old_max = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            old_max = candies[i];
            if (old_max > max)
            {
                max = old_max;
            }
            candies[i] += extraCandies;
        }

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] >= max)
            {
                state.push_back(true);
            }
            else
            {
                state.push_back(false);
            }
        }
        return state;
    }
};

int main()
{
    vector<int> vec {1,5,10,6,8,9};
    Solution s;

    vector<bool> ans = s.kidsWithCandies(vec , 5);

    for(auto v : ans)
        cout<<v<<endl;
    return 0;
}


