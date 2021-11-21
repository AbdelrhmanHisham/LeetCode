#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:



    vector<vector<int>> generateMatrix(int n)
    {
    std::vector<std::vector<int>> vec(n,std::vector<int>(n));

        int upper_bound = 1; // ++
        int lower_bound = n-1; // --
        int right_bound = n-1; //--
        int left_bound = 0; // ++

        int total_element = n * n; 
        if(n == 1)
        {
            vec[0][0] = 1;
            return vec;
        }

        int x = 1;
        int i = 0;
        int j = 0;
        bool fill_left = false;
        bool fill_right = true;
        bool fill_down = false;
        bool fill_up = false;
        vec[0][0] = 1;
        x++;
        while(x <= total_element)
        {

            if(fill_left == true)
            {
                j--;
                if(j == left_bound)
                {
                    fill_left = false;
                    fill_up = true;
                    left_bound++;
                }
            }else if(fill_right == true)
            {
                j++;
                if(j == right_bound)
                {
                    fill_right = false;
                    fill_down = true;
                    right_bound--;
                }
            }else if(fill_down == true)
            {
                i++;
                if(i == lower_bound)
                {
                    fill_down = false;
                    fill_left = true;
                    lower_bound--;
                }
            }else if(fill_up == true)
            {
                i--;
                if(i == upper_bound)
                {
                    fill_up = false;
                    fill_right = true;
                    upper_bound++;
                }
            }

            vec[i][j] = x;
            x++;
        }
    
    return vec;
    }
};

int main()
{
Solution _Solution;
std::vector<std::vector<int>> vec = _Solution.generateMatrix(3);
    
    for(auto ve : vec)
    {
        for(auto v : ve)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}