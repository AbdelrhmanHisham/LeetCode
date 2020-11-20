#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t out;
        // int ones=0;
        // int zeros=0;

        for (int i = 0; i < 32; i++)
        {
            if ((n >> i) & (1) == 1)
            {

                out |= (1 << (31 - i));
                // ones++;
            }
            else
            {
                out &= ~(1 << (31 - i));
                // zeros++;
            }

            // cout<<"ones : "<<ones<<" Zeros : "<<zeros<<endl;
        }

        return out;
    }
};

void print_binary(uint32_t n);
int main()
{
    Solution s;
    int num = s.reverseBits(0x12345678);
    print_binary(num);
    return 0;
}

void print_binary(uint32_t n)
{
    for (int i = 0; i < 32; i++)
    {
        printf("%d",(n >> i) & (1));
    }
    
}