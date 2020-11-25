#include <string>
#include <unordered_set>
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

// class Solution
// {
// private:
//     bool scan(string str, string target, int& start)
//     {
//         int i = start+1;
//         int j =1;
//         bool check = true;
//         int key=0;
//         bool enter = true;
//         while (j < target.size())
//         {
//             if (str[0] == target[0] && enter)
//             {
//                 key = i;
//                 enter =false;
//             }

//             if (str[i] != target[j])
//             {
//                 check = false;
//                 break;
//             }

//             i++;
//             j++;
//         }
//         start = key;
//         return check;
//     }

// public:
//     int strStr(string haystack, string needle)
//     {
//         if(needle.size()==0)return 0;
//         int i = 0;
//         bool check = true;
//         bool enter = false;
//         while (i < haystack.size() && needle.size() <= haystack.size() )
//         {
//             enter =true;
//             if (haystack[i] == needle[0])
//             {
//                 if (scan(haystack, needle, i))
//                 {
//                     check = true;
//                     cout<<i<<endl;
//                     break;
//                 }
//             }

//             check = false;
//             // cout<<i<<endl;
//             i++;

//         }

//         if (check && enter)
//         {
//             return i;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };

class Solution
{
private:
    int scan(unordered_set<char>::iterator it, unordered_set<char>::iterator it2, string target)
    {
        cout << "shika";
        int key = std::distance(it, it2);
        cout << "Distance : " << key << endl;
        int i = 1;
        it++;
        while (i < target.size())
        {
            if (*it != target[i])
            {
                return -1;
            }

            i++;
            it++;
        }

        return key;
    }

public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
            return 0;

        unordered_multiset<char> Map;

        for (int i = haystack.size()-1; i >= 0; i--)
        {
            Map.insert(haystack[i]);
            // cout << "In : " << haystack[i] << endl;
        }

        // unordered_multimap<char,int>::iterator st = Map.begin();
        // ++st;
        // int x = 0;
        // x--;
        // for ( st; st != Map.end(); st++)
        // {
        //    cout<< (st->first)<<endl;

        // }

        bool check = false;
        int key = 0;
        unordered_set<char>::iterator it = Map.begin();
        while (true)
        {

            it = Map.find(needle[0]);
            cout << *it << endl;
            if (it != Map.end())
            {
                cout << "Before scan " << endl;
                // key = scan(it, Map.begin(), needle);
                cout << "After scan with key : " << key << endl;
                if (key != -1)
                {
                    return key;
                }
                else
                {
                    Map.erase(needle[0]);
                }
            }
            else
            {
                return -1;
            }
        }

        return key;
    }
};

int main()
{

    Solution s;
    cout << s.strStr("hello", "ll");
    return 0;
}
