#include <map>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        multimap<int, int> Map;
        vector<int> indices;
        for (int i = 0; i < nums.size(); i++)
        {
            Map.insert(pair<int, int>(nums[i], i));
        }

        auto it = Map.find(target);

        if (it != Map.end())
        {
            int start = it->second;
            indices.push_back(start);
            Map.erase(it);
            int end = start;
            while (true)
            {
                it = Map.find(target);
                if (it == Map.end())
                {
                    break;
                }
                end = it->second;
                Map.erase(it);
            }
            indices.push_back(end);
            return indices;
        }
        else
        {
            indices.push_back(-1);
            indices.push_back(-1);
            return indices;
        }
    }
};

int main(){
vector<int> vec {5,7,7,8,8,10};


Solution s;
vector<int> values = s.searchRange(vec , 8);    

for(auto val : values)
    cout<<val<<endl;
    return 0;
}