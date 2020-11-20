#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> diStringMatch(string S)
    {
        int start = 0;
        int max = S.size();
        vector<int> vec;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'I')
            {
                vec.push_back(start);
                start++;
                if (i == S.size() - 1)
                {
                    vec.push_back(start);
                }
            }
            if (S[i] == 'D')
            {
                vec.push_back(max);
                max--;
                if (i == S.size() - 1)
                {
                    vec.push_back(max);
                }
            }
        }

        return vec;
    }
};

int main()
{

    Solution s;
    vector<int> vec = s.diStringMatch("IDID");

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Vec : " << vec[i] << endl;
    }

    return 0;
}