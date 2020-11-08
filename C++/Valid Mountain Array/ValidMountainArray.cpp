#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int up = 0;
        int down = 0;
        int peak = 0;
        if (arr.size() < 3)
            return false;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                if (i == 0)
                    return false;
                down++;
            }
            else if (arr[i] < arr[i + 1])
            {
                up++;
            }
            else
            {
                return false;
            }

            if (up > 0 && down > 0)
            {
                peak++;
                up = 0;
            }
        }
        cout << "Down : " << down << " Up : " << up << "Peak : " << peak << endl;

        if (peak == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    vector<int> vec{0, 3, 3, 1};
    Solution s;
    bool shika = s.validMountainArray(vec);
    cout << shika;

    return 0;
}   