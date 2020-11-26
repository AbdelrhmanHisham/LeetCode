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

// class Solution
// {
// private:
//     int scan(unordered_multiset<char>::iterator it, unordered_multiset<char> shika, string target)
//     {
//         int key = shika.size() - std::distance(it, shika.end());
//         int i = 1;
//         it++;
//         while (i < target.size())
//         {
//                 // cout<<*it<<"  "<<target[i]<< "  "<< i<< endl;

//             if (*it != target[i])
//             {
//                 return -1;
//             }

//             i++;
//             it++;
//         }

//         return key;
//     }

// public:
//     int strStr(string haystack, string needle)
//     {
//         if (needle.size() == 0)
//             return 0;

//         unordered_multiset<char> Map;

//         for (int i = haystack.size() - 1; i >= 0; i--)
//         {
//             Map.insert(haystack[i]);
//         }

//         bool check = false;
//         int key = 0;
//         unordered_set<char>::iterator it = Map.begin();
//         for (it; it != Map.end(); it++)
//         {
//             cout<<*it<<endl;
//         }

//         while (true)
//         {

//             it = Map.find(needle[0]);
//             if (it != Map.end() && needle.size() <= haystack.size())
//             {
//                 key = scan(it, Map, needle);
//                 cout<<key<<endl;
//                 if (key != -1)
//                 {
//                     return key;
//                 }
//                 else
//                 {
//                     Map.erase(needle[0]);
//                 }
//             }
//             else
//             {
//                 return -1;
//             }
//         }

//         return key;
//     }
// };

// class Solution
// {
// private:
//     int scan(size_t it, string shika, string target)
//     {
//         int key = it;
//         int i = 1;
//         it++;
//         while (i < target.size())
//         {
//             // cout<<*it<<"  "<<target[i]<< "  "<< i<< endl;

//             if (shika[it] != target[i])
//             {
//                 return -1;
//             }

//             i++;
//             it++;
//         }

//         return key;
//     }

// public:
//     int strStr(string haystack, string needle)
//     {
//         if (needle.size() == 0 || haystack == needle)
//             return 0;

//         bool check = false;
//         int key = 0;

//         int i = 0;
//         while (true)
//         {

//             size_t it = haystack.find(needle[0] , it+i);
//             if (it != string::npos && needle.size() <= haystack.size())
//             {
//                 key = scan(it, haystack, needle);
//                 if (key != -1)
//                 {
//                     return key;
//                 }
//                 else
//                 {
//                     // Map.erase(needle[0]);
//                 }
//             }
//             else
//             {
//                 return -1;
//             }

//             i++;
//         }

//         return key;
//     }
// };

// class Solution
// {
// private:
//     int scan(size_t it, string shika, string target)
//     {
//         int key = it;
//         int i = 1;
//         it++;
//         while (i < target.size())
//         {
//             // cout<<*it<<"  "<<target[i]<< "  "<< i<< endl;

//             if (shika[it] != target[i])
//             {
//                 return -1;
//             }

//             i++;
//             it++;
//         }

//         return key;
//     }

// public:
//     int strStr(string haystack, string needle)
//     {
//         if (needle.size() == 0 || haystack == needle)
//             return 0;

//         bool check = false;
//         int key = 0;

//         int i = 0;
//         while (true)
//         {

//             int it = haystack.find(needle[0] , it+i);
//             cout<<it<<endl;
//             if (it != string::npos && needle.size() <= haystack.size())
//             {
//                 key = scan(it, haystack, needle);
//                 if (key != -1)
//                 {
//                     return key;
//                 }
//                 else
//                 {
//                     // Map.erase(needle[0]);
//                 }
//             }
//             else
//             {
//                 cout<<"a7a\n";
//                 return -1;
//             }

//             i++;
//         }

//         return key;
//     }
// };

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0 || haystack == needle)
            return 0;

        bool check = false;
        int key = haystack.find(needle);

        int i = 0;

        if (key != string::npos)
        {
            return key;
        }
        else
        {
            return -1;
        }

        return key;
    }
};

int main()
{

    Solution s;
    // cout << s.strStr("mississippi","mississippi");
    cout << s.strStr("hello", "ll");
    return 0;
}
