#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
/*
class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {

        int longest = 0;
        int final_longest = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i+1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    longest = j - i;
                    //cout<<"i : "<<i<<" j : "<<j << " Long :"<<longest<<endl;
                    
                }
            }
            if (final_longest < longest)
            {
                final_longest = longest;
            }
        }

        return --final_longest;
    }
};
*/

class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {

        unordered_map<char, int> Map;
        for (int i = 0; i < s.size(); i++)
        {
            Map[s[i]] = i;
        }

        unordered_map<char, int>::iterator it = Map.begin();
        int len = 0;
        int max =0;
        for (int i = 0; i < s.size(); i++)
        {
           len = Map[s[i]] - i;

           if (len > max)
           {
               max = len;
           }
             
        }
        return --max;
    }
};

int main()
{

    Solution s;
    cout << s.maxLengthBetweenEqualCharacters("mgntdygtxrvxjnwksqhxuxtrv");

    return 0;
}