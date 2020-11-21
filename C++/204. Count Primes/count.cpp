#include <iostream>
#include <cstring>
using namespace std;
// class Solution
// {
// private:
//     bool is_prime(int n)
//     {
//         if (n == 2)
//             return true;

//         for (int i = 2; i <= n/2; i++)
//         {
//             if (n % i ==0)
//             {
//                 return false;
//             }

//         }

//         return true;
//     }

// public:
//     int countPrimes(int n)
//     {
//         if (n < 2)
//             return 0;

//         // bool division = false;
//         int counter = 1;
//         for (int i = 3; i < n;i+=2)
//         {
//             if (is_prime(i))
//             {
//                 counter++;
//             }

//         }

//         return counter;
//     }
// };

class Solution
{

public:
    int countPrimes(int n)
    {
        if (n < 2)
            return 0;

            int counter =0;
            bool sieve[n];
            memset(sieve, true, sizeof(sieve));

            for (int i = 2; i < n; i++)
            {
                if (sieve[i])
                {
                    counter++;
                    for (int j = i; j < n; j+=i)
                    {
                        sieve[j] = false;
                    }
                    
                }
                
            }
            

        return counter;
    }
};

int main()
{
    Solution s;
    cout << s.countPrimes(10);
    return 0;
}