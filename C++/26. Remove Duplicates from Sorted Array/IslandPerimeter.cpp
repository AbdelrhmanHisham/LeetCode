#include <vector>
#include <iostream>
using namespace std;

class Solution
{

private:
    int scan_around(int x, int y, int max_x, int max_y, vector<vector<int>> &grid)
    {
        int sides = 0;
        bool up = true;
        bool down = true;
        bool back = true;
        bool forward = true;
        // cout << "Enter\n";
        // cout << "max _ x : " << max_x << " max _ y : " << max_y << endl;

        if (y == 0)
        {
            back = false;
            // cout << "NO BACK \n";
        }

        if (y == max_y)
        {
            forward = false;
            // cout << "NO forward \n";
        }

        if (x == 0)
        {
            up = false;
            // cout << "NO Up \n";
        }

        if (x == max_x)
        {
            down = false;
            // cout << "NO Down \n";
        }



        if (up && grid[x][y] == grid[x - 1][y])
        {
            sides++;
        }
        if (down && grid[x][y] == grid[x + 1][y])
        {
            sides++;
        }
        if (back && grid[x][y] == grid[x][y - 1])
        {
            sides++;
        }
        if (forward && grid[x][y] == grid[x][y + 1])
        {
            sides++;
        }

        return sides;
    }

public:
    int islandPerimeter(vector<vector<int>> &grid)
    {

        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;
        int neigbours = 0;

        cout << rows << "  " << cols << endl;
        if (rows == 0 && cols == 0)
        {
            return 0;
        }
        if (rows == 1 && cols == 0)
        {
            return grid [0][0] * 4;
        }
        if (rows == 1 && cols == 1)
        {
            return grid [0][0] * 4;
        }
        for (int i = 0; i < rows; i++)
        {

                for (int j = 0; j < cols; j++)
                {

                    if (grid[i][j] == 1)
                    {
                        // cout << "I : " << i << " J : " << j << endl;
                        // if (i == 3 && j == 0)
                        // {
                        //     continue;
                        // }

                        neigbours = scan_around(i, j, rows - 1, cols - 1, grid);
                        // if (neigbours == 4)
                        //     return neigbours;

                        perimeter += (4 - neigbours);
                        // cout << "Nei : " << neigbours << " Per : " << perimeter << endl;
                    }

                    // cout << endl;
                }

        }

        return perimeter;
    }
};

int main()
{
    // vector<vector<int>> vec{{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    vector<vector<int>> vec{{1,0}};

    Solution s;
    cout << s.islandPerimeter(vec);
    return 0;
}