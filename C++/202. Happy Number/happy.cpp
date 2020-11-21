#include <vector>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Solution
{
private:
    vector<int> separate(int n)
    {
        vector<int> vec;
        while (n != 0)
        {
            vec.push_back((n % 10));
            n /= 10;
        }
        return vec;
    }

    int calc(vector<int> vec)
    {
        int result = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            result+=std::pow(vec[i],2);
        }
        return result;
    }

public:
    bool isHappy(int n)
    {
        vector<int> vec = separate(n);
        for (int i = 0; i < vec.size(); i++)
        {
            printf("|%d|", vec[i]);
        }
        cout << endl;

        int out = calc(vec);
        while (out != 1)
        {
            cout<<out<<endl;
            out = calc(separate(out));

            if(out/10 == 0 && out != 1)return false;
            
        }
            cout<<out<<endl;
        return true;
    }
};

int main()
{

    Solution s;
    cout << s.isHappy(50);
    return 0;
}