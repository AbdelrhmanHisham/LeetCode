#include <vector>
#include <iostream>
using namespace std;

void print_Img(vector<vector<int>> &matrix);

class Solution
{
private:
    void swap(int &elm_1, int &elm_2)
    {
        // elm_1 = elm_1 + elm_2;
        // elm_2 = elm_1 - elm_2;
        // elm_1 = elm_1 - elm_2;

        int temp = elm_1;
        elm_1 = elm_2;
        elm_2 = temp;
    }
    void reverse(vector<int> &row)
    {
        int start = 0;
        int end = row.size() - 1;

        while (start < end)
        {
            swap(row[start], row[end]);
            start++;
            end--;
        }
    }

public:
    void rotate(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {

            for (int j = i; j < matrix[i].size(); j++)
            {
                // if (i == j)
                // {
                //     continue;
                // }
                swap(matrix[i][j], matrix[j][i]);
            }
            reverse(matrix[i]);
        }
    }
};

int main()
{

    vector<vector<int>> img{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution s;
    cout << "*******************Before *********" << endl;
    print_Img(img);
    s.rotate(img);
    cout << "*******************AFter **********" << endl;
    print_Img(img);
    
    return 0;
}

void print_Img(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            printf("|%2d|", matrix[i][j]);
        }
        cout << endl;
    }
}