#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_Vec(vector<int> &Row);

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        k = k % nums.size();
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};

int main()
{

    // vector<int> arr{1, 2, 3, 4, 5, 6, 7 , 8 , 9};

    vector<int> arr{1};
    Solution s;
    cout << "*******************Before *********" << endl;
    print_Vec(arr);
    s.rotate(arr, 20);
    cout << "*******************AFter **********" << endl;
    print_Vec(arr);
    return 0;
}

void print_Vec(vector<int> &Row)
{
    for (int i = 0; i < Row.size(); i++)
    {
        printf("|%2d|", Row[i]);
    }
    cout << endl;
}