#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
// class Solution
// {

// public:
//     vector<int> faliure_fun(string str)
//     {
//         vector<int> vec(str.size());
//         vec[0] = 0;
//         int k = 0;
//         for (int i = 1; i < str.size(); i++)
//         {
//             while (k > 0 && str[k] != str[i])
//             {
//                 k = vec[k - 1];
//             }
//             if (str[k] == str[i])
//             {
//                 vec[i] = ++k;
//             }
//         }

//         return vec;
//     }

//     bool KMP(string str, string needed)
//     {

//         int n = needed.size();

//         vector<int> faliure = faliure_fun(needed);

//         int k = 0;
//         int key = -1;
//         for (int i = 0; i < str.size(); i++)
//         {
//             while (k > 0 && str[i] != needed[k])
//             {
//                 k = faliure[k - 1];
//             }

//             if (needed[k] == str[i])
//             {
//                 k++;
//             }

//             if (k == n)
//             {
//                 key = i - n + 1;
//                 break;
//             }
//         }

//         return (key != -1);
//     }

// public:
//     int repeatedStringMatch(string a, string b)
//     {
//         if (b == "")
//         {
//             return 0;
//         }

//         if (a == "")
//         {
//             return -1;
//         }

//         string holder;
        
//         int counter = 0;

//         if (a.size() >= b.size())
//         {
//             if (KMP(a, b))
//             {
//                 return 1;
//             }
//             else
//             {
//                 while (counter < b.size())
//                 {
//                     holder += a;
//                     counter++;

//                     if (KMP(holder, b))
//                     {
//                         return counter;
//                     }
//                 }
//             }
//         }
//         else
//         {

//             while (holder.size() < b.size())
//             {
//                 holder += a;
//                 counter++;
//             }
//             // cout << "counter : " << counter << " holder : " << holder << endl;

//             while (holder.size() < 2 * b.size())
//             {
//                 if (KMP(holder, b))
//                 {
//                     return counter;
//                 }
//                 holder += a;
//                 counter++;
//             }
//         }

//         return -1;
//     // }
//     //     int repeatedStringMatch(string a, string b)
//     //     {
//     //         if (b == "")
//     //         {
//     //             return 0;
//     //         }

//     //         if (a == "")
//     //         {
//     //             return -1;
//     //         }

//     //         string holder;
//     //         int counter = 0;

//     //         while (counter < b.size())
//     //         {
//     //             holder += a;
//     //             counter++;

//     //             if (KMP(holder, b))
//     //             {
//     //                 return counter;
//     //             }

//     //         }

//     //         return -1;
//     //     }



//         int repeatedStringMatch(string a, string b)
//         {
//             if (b == "")
//             {
//                 return 0;
//             }

//             if (a == "")
//             {
//                 return -1;
//             }

//             string holder;
//             int counter = 0;

//             while (counter < b.size())
//             {
//                 holder += a;
//                 counter++;

//                 if (KMP(holder, b))
//                 {
//                     return counter;
//                 }

//             }

//             return -1;
//         }



// };

int main()
{

    // Solution s;
    // cout << s.repeatedStringMatch("aaac", "aac");
    // cout << s.KMP("aaac", "aac");


    int a = 0;
    int n = 10;
    int i = n ;

    // while( i > 0)
    // {
    //     cout<<"a : "<<a<<" i : "<<i<<endl;
    //     a +=n;
    //     i/=2;

    // }
    cout<<7%1;
    
    return 0;
}


5 1 6 2 4
1 5 2 6 4
1 2 5 4 6
1 2 