#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> Map;

        for (int i = 0; i < nums.size(); i++)
        {
            Map[nums[i]]++;
        }
        int num_of_pairs = 0;
        unordered_map<int, int>::iterator it = Map.begin();
        for (int i = 0; i < Map.size(); i++)
        {
            if (it->second > 1)
            {
                num_of_pairs += comb(it->second, 2);
            }

            it++;
        }

        return num_of_pairs;
    }

private:
    long long int fact(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }

        return n * fact(n - 1);
    }

    int comb(int n, int r)
    {
        return (fact(n) / (fact(n - r) * fact(r)));
    }
};

int main()
{

    vector<int> vec{2,2,1,5,1,5,5,2,3,1,1,5,3,2,3,3,3,1,3,3,4,3,1,3,1,4,5,5,2,2,1,3,5,2,2,4,3,2,5,3,1,1,3,3,2,5,2,1,2,4,3,4,4,3,2,4,4,1,3,3,3,5,5,5,4,1,1,2,3,3,2,5,3,4,5,3,1,2,5,4,5,2,3,3,1,5,2,4,2,4,4,3,1,3};
    Solution s;

    cout << s.numIdenticalPairs(vec);
    return 0;
}