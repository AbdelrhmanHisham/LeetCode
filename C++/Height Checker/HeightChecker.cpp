#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        multiset<int> holder;
        multiset<int>::iterator it = holder.begin();
        int error = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            holder.insert(heights[i]);
        }
        int i = 0;
        for(auto s : holder)
        {
            if (s != heights[i])
            {
                error++;
            }
            i++;
            
        }
        return error;
    }
};

int main()
{
    vector<int> vec {1,2,3,4,5};
    Solution s;
    cout<<s.heightChecker(vec)<<endl;
    return 0;
}