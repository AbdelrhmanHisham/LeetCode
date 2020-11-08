#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address)
    {
        string fixed;
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                fixed +="[.]";
                continue; 
            }
         fixed +=address[i];   
        }
            return fixed;
    }
};

int main(){

    Solution s;
    cout<<s.defangIPaddr("10.10.10");

    return 0;
}