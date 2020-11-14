#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
    }
};

int main()
{
    vector<int> vec;

    Solution s;
    cout << "New size : " << s.removeDuplicates(vec) << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    cout << endl;

    return 0;
}