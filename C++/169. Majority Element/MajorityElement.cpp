#include <unordered_map>
#include <vector>

using namespace std;


class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int,int> Map;
        for (int i = 0; i < nums.size(); i++)
        {
            Map[nums[i]]++;
        }
        unordered_map<int,int>::iterator it = Map.begin();
        int max =0;
        int new_max=0;
        int key = 0;

        for (int i = 0; i < Map.size(); i++)
        {
            new_max = it->second;
            if(it->second > nums.size()/2 && new_max > max)
            {
                max =it->second; 
                key = it->first;
            }
            it++;
        }
        
        return key;
    }
};

int main()
{

    return 0;
}