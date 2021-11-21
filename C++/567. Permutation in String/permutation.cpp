#include <string>
#include <iostream>
#include <set>
using namespace std;

// class Solution
// {
// public:
//     bool checkInclusion(string s1, string s2)
//     {
//         int j = 0;
//         int end = s1.size()-1;
//         bool enter_condition_1 = false;
//         bool enter_condition_2 = false;

//         for (int i = 0; i < s2.size(); i++)
//         {
//             cout<<"i : "<<i<<endl;
//             if (s2[i] == s1[j] && enter_condition_2 == false )
//             {
//                 cout<<"Match from forward !!"<<endl;
//                 enter_condition_1 = true;
//                 j++;
//                 if (j== s1.size())return true;
//             }
//             else if (s2[i] == s1[end] && enter_condition_1 == false)
//             {
//                 cout<<"Match from backward !!"<<endl;
//                 enter_condition_2 = true;
//                 end--;
//                 if (end == -1)return true;

//             }
//             else
//             {
//                 enter_condition_1 = false;
//                 enter_condition_2 = false;

//                 cout<<"NO Matching"<<endl;
//             }

//             cout<<"---------------------"<<endl;
//         }

//         return false;
//     }
// };

// class Solution
// {
// public:
//     bool checkInclusion(string s1, string s2)
//     {
//         int j = 0;
//         int end = s1.size() - 1;
//         multiset<char> data_holder;
//         int counter = 0;
//         for (int i = 0; i < s1.size(); i++)
//         {
//             data_holder.insert(s1[i]);
//         }
//         cout<<s1.size()<<endl;
//         cout<<data_holder.size()<<endl;

//         multiset<char> data_holder_2 = data_holder;

//         // for (int i = 0; i < s2.size(); i++)
//         int i = 0;
//         while (i < s2.size())
//         {
//             auto it =data_holder.find(s2[i]);
//             if (it != data_holder.end())
//             {
//                 cout << "i : " << i << endl;
//                 cout<<"s2[i] : "<<s2[i]<<endl;
//                 cout<<"counter : "<<counter<<endl;
//                 counter++;
//                 data_holder.erase(it);
//                 if (data_holder.empty())
//                     return true;
//             }
//             else
//             {
//                 data_holder.clear();
//                 data_holder = data_holder_2;
//                 counter = 0;
//             }
//             i++;
//             cout<<"-----"<<endl;
//         }

//         return false;
//     }
// };

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int char_arr[26] = {0};
        int moving_char_arr[26] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            int index = s1[i] - 'a';
            char_arr[index]++;
        }

        int window_size = s1.size();
        int start_pos = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            // cout<<"I : "<<i<<endl;
            int index = s2[i] - 'a';
            moving_char_arr[index]++;
            if ((i - start_pos + 1) == s1.size())
            {
                bool permutations = check_permutations(char_arr, moving_char_arr);
                if (permutations == true)
                {
                    return true;
                }
                else
                {
                    // cout<<"No permutations"<<endl;
                    index = s2[start_pos] - 'a';
                    moving_char_arr[index]--;
                    start_pos++;
                }
            }

            // cout<<"---------------"<<endl;
        }

        return false;
    }

private:
    bool check_permutations(int *arr_1, int *arr_2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr_1[i] != arr_2[i])
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution _Solution;

    bool ans = _Solution.checkInclusion("ab", "eidboaoo");
    cout << "ans : " << ans << endl;
    return 0;
}