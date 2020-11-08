#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
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
*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int> data;
        
        int count = 0;
        
        for(int i = 0; i<nums.size(); i++){
            count+= data[nums[i]]++; 
            cout<<count<<endl;
        }
        
        return count; 
    }
};



int main()
{

    vector<int> vec{1,1,1,1};
    Solution s;

    cout << s.numIdenticalPairs(vec);
    return 0;
}