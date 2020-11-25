#include <string>
#include <vector>
#include <set>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {

        unordered_set<string> Set;
        for (auto row : paths)
        {
            Set.insert(row[1]);
        }

        for (auto row : paths)
        {
            if (Set.count(row[0]) == 1)
            {
                Set.erase(row[0]);
            }
            
        }
        
        return *(Set.begin());
    }
};

int main()
{
    Solution s;
    vector<vector<string>> vec{{"London", "New York"}, {"New York", "Lima"}, {"Lima", "Sao Paulo"}};
    string shika = s.destCity(vec);
    cout << shika << endl;
    return 0;
}