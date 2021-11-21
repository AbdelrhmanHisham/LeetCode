#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         //if (s.size() == 1)return 1;
//         set<char> holder;
//         int max_string = 0;
//         int current_string_size = 0;
//         int char_holder[256];
//         fill_n(char_holder, 256, -1);
//         int start_pos = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             int index = s[i];
//             holder.insert(s[i]);
//             if (char_holder[index] == 1)
//             {
//                 cout<<"duplicate happen"<<endl;
//                 max_string = max(max_string, current_string_size);
//                 bool no_duplicate = false;
//                 while (no_duplicate == false)
//                 {
//                     holder.erase(s[start_pos]);
//                     char_holder[s[start_pos]] = -1;
//                     current_string_size--;
//                     start_pos++;
//                     if (holder.find(s[i]) == holder.end())
//                     {
//                         no_duplicate = true;
//                     }
//                 }

//             }else
//             {
//                 cout<<"no_duplicate"<<endl;
//             }
//             current_string_size++;
//             char_holder[index] = 1;
//             cout<<"i : "<<i<<endl;
//             cout<<"current_string_size : "<<current_string_size<<endl;
//             cout<<"-----------------"<<endl;
//         }
//         max_string = max(max_string, current_string_size);
//         return max_string;
//     }
// };
// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int i = 0, j = 0, lm = 0, gm = 0;
//         int n = s.size();
//         int visited[125] = {0};
//         while (j < n)
//         {
//             if (i == j || visited[s[j] - ' '] == 0)
//             {                            //if we incounter a char 1st time
//                 visited[s[j] - ' '] = 1; //mark it visited
//                 lm++;                    //increment local minimum
//                 j++;                     //increment right index
//             }
//             else
//             {
//                 if (gm < lm) //update global maxlen
//                     gm = lm;
//                 visited[s[i] - ' '] = 0; //Make the i th char available for future use
//                 lm = lm - 1;             //since we found duplicate decrese the local maxlen by 1
//                 i = i + 1;               //increment right index
//             }
//         }
//         return gm < lm ? lm : gm; //to take of the case if last char is included in the ans.
//         // return gm; //to take of the case if last char is included in the ans.
//         // return lm; //to take of the case if last char is included in the ans.
    
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        // if (s.size() == 1)return 1;
        int max_string = 0;
        int current_string_size = 0;
        int char_holder[256];
        int start_pos =0;
        fill_n(char_holder, 256, -1);
        // for (int i = 0; i < s.size(); i++)
        int i = 0;
        while (i < s.size())
        {
            int index = s[i];
            if (char_holder[index] == 1)
            {
                max_string = max(max_string, current_string_size);
                char_holder[s[start_pos]] = -1;
                current_string_size--;
                start_pos++;
            }else
            {
                i++;
                current_string_size++;
                char_holder[index] = 1;
            }
        }
        max_string = max(max_string, current_string_size);
        return max_string;
    }
};
int main()
{
    Solution _Solution;
    int size = _Solution.lengthOfLongestSubstring("dvdf");
    cout << "size : " << size << endl;
    return 0;
}