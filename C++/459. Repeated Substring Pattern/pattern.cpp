#include <string>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
public:
    bool repeatedSubstringPattern(string s , vector<int> vec)
    {
        unordered_multiset<int> Set;
        // unordered_multiset<char> Set_2;
        // int size_of_sub_string = 0;

        if (s.size() <= 1)
            return false;

        int start =0;
        int end = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            Set.insert(vec[i]);
        }
        // Set_2 = Set;


        for (auto it = Set.begin(); it != Set.end(); it++)
        {
            cout << "Set : " << *it << endl;
        }



        return true;
        // int i = Set.size();
        // auto it = Set.begin();
        // bool exits = true;

        // while (i < s.size())
        // {

        //     it = Set.find(s[i]);
        //     cout<<i<<"  "<<*it<<endl;
        //     if (it != Set.end())
        //     {
        //         Set.erase(s[i]);
        //     }else
        //     {
        //         return false;
        //     }

        //     i++;
        //     if (Set.empty())
        //     {
        //         Set = Set_2;
        //     }
        // }
        // if(Set.size() == Set_2.size())return true;
        // else return false;
    }
};
int main()
{
    Solution s;
    string str = "abcabcabcabc";
    vector<int> vec {10,2,0,100,50,-7,1};
    cout << s.repeatedSubstringPattern(str ,vec);
    return 0;
}