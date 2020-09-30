#include <vector>
#include <iostream>
using namespace std;

class SubrectangleQueries
{
private:
    vector<vector<int>> rectangle;
    int row;
    int col;

public:
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        this->rectangle = rectangle;
        this->row = rectangle.size();
        this->col = rectangle[0].size();
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {

        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                this->rectangle[i][j] = newValue;
                // cout<<"i : "<<i<<"J : "<<j<<endl;
            }
        }
    }
    void print_rect()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->col; j++)
            {
                cout<<"| "<<this->rectangle[i][j];
            }
            cout<<endl;
        }
    }
    int getValue(int row, int col)
    {
        return this->rectangle[row][col];
    }
};

int main()
{

    vector<vector<int>> shika = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries s(shika);
    // s.print_rect();
    cout << "Get value : " << s.getValue(0, 2) << endl;
    s.updateSubrectangle(0, 0, 3, 2, 5);
    // s.print_rect();
    cout << "Get value : " << s.getValue(0, 2) << endl;
    cout << "Get value : " << s.getValue(3, 1) << endl;
    s.updateSubrectangle(3, 0, 3, 2, 10);
    cout << "Get value : " << s.getValue(3, 1) << endl;
    cout << "Get value : " << s.getValue(0, 2) << endl;

    return 0;
}
