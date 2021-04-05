#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    //Just a function to determine a sign, return 1, -1 or 0
    template <typename T> int sgn(T val) {
        return (T(0) < val) - (val < T(0));
    }
    
    int reverse(int x) {
		/* Use exactly uint64_t to store x without sign and be able to check overflow after reverse
         * because uint64_t can't be overflowed after reverse of 'int' 
         * Don't use simple 'unsigned long int', because it can be equal to just 'unsigned int' */
		uint64_t u_x = 0, n_u_x = 0;
     
		 // Check the sign and convert to uint64_t
        if (x > 0) {
            u_x = x;
        } else {
			/* if x negative then x will be converted to uint64_t in this expression 
             * it will be (UINT_MAX - abs(x) - 1), so we need to balance 
             * by adding UINT_MAX and +1 */
		//    u_x = UINT_MAX - x + 1;
        u_x = x *-1;
        }
        cout<<u_x<<endl;
        
		/* Simple algorithm, take the last digit from u_x and it to n_u_x 
		 * then just remove last digit from u_x */
        while (u_x > 0) {
            n_u_x = n_u_x * 10 + u_x % 10;
            u_x /= 10;
            cout<<n_u_x<<endl;
        }
        
		// Check if overflow is possible if we convert uint64_t back to in
        if (n_u_x > INT_MAX) {
            return 0;
        }
        
		// Return result with a correct sign
        return sgn(x) * int(n_u_x);
    }
};



// class Solution
// {
// public:
//     int reverse(int x)
//     {
//         bool negative = false;
//         int size = 0;
//         int i = 0;
//         string temp = to_string(x);
//         // cout <<"String num : "<<temp<<endl;
//         std::reverse(temp.begin(), temp.end());
//         // cout<<"Reversed String : "<<temp<<endl;
//         size = temp.length();

//         long long reversed_num;
//         if (x < 0)
//         {
//             negative = true;

//             size--;
//         }
//         long long k = std::pow(10, size - 1);
//         // cout << k<<endl;
//         for (i; i < size; i++)
//         {
//             int holder = (temp[i] - '0');
//             reversed_num += (holder * k);

//             k /= 10;
//         }

//         if (negative)
//         {
//             reversed_num *= -1;
//         }

//         if (reversed_num > INT32_MAX || reversed_num < INT32_MIN)
//             return 0;

//         int Out = reversed_num;
//         // cout<<reversed_num;
//         return Out;
//     }
// };




int main()
{
    Solution s;
    int number = -15365165;
    cout << number << endl;
    int num = s.reverse(number);
    cout << num << endl;



    cout << s.sgn(0);
    return 0;
}
