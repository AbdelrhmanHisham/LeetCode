#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;


class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 1)
            return strs[0];
     
     
        if (strs.size() == 0)
            return "";

        string out = "";
        int j = 0;
        int i =0;
        for (auto c : strs[0])
        {
            for ( j =1 ; j < strs.size(); j++)
            {
                if (c != strs[j][i] || i >= strs[j].size())
                {
                    return out;
                }
            }

            out += c;
            i++;
        }
    
    return out;
    }

};

int main()
{

    Solution s;
    // vector<string> vec{"flower", "flow", "flight"};
    // vector<string> vec{"dog","racecar","car"};
    vector<string> vec{"flower"};
    
    cout << s.longestCommonPrefix(vec)<<endl;

    return 0;
}
