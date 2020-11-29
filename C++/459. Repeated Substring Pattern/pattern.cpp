#include <string>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        bool pattern = false;
        int n = s.size();
        if(n <= 1)return pattern;
        
        string holder;
        for (int i = n/2; i > 0; i--)
        {   
            holder = s.substr(0,i);
            holder += holder;
            if (s == holder)
            {
                return true;
            }
            
            // cout<<holder<<endl;
        }
        
  

        return pattern;
    }
};

int main()
{
    Solution s;
    string str = "abaaba";
    cout << s.repeatedSubstringPattern(str);
    return 0;
}