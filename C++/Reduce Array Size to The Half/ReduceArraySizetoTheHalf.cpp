#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {

        int max_size = pow(10, 5);
        if (arr.size() == 0)
        {
            return 0;
        }
        vector<int> vec(max_size, 0);
        for (int i = 0; i < arr.size(); i++)
        {
            vec[arr[i]]++;
        }

        sort(vec.begin(), vec.end(), greater<int>());

        int sum = 0;
        int halflen = arr.size() / 2;
        int i;
        for (i = 0; i < max_size; i++)
        {
            sum += vec[i];
            if (sum >= halflen)
            {
                break;
            }
        }

        return i + 1;
    }
};

int main()
{

    vector<int> vec{9, 77, 63, 22, 92, 9, 14, 54, 8, 38, 18, 19, 38, 68, 58, 19};

    // vector<int> vec{1000,1000,3,7};
    cout << "Original Size : " << vec.size() << endl;
    Solution s;
    int min = s.minSetSize(vec);
    cout << "Min number : " << min << endl;
}