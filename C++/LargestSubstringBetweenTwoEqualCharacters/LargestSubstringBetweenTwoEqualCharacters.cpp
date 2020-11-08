#include <string>
#include <iostream>
using namespace std;

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

int main()
{

    Solution s;
    cout << s.maxLengthBetweenEqualCharacters("mgntdygtxrvxjnwksqhxuxtrv");

    return 0;
}