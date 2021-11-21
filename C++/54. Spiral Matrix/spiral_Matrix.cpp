#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> vec;
        int upper_bound = 1; // ++
        int lower_bound = matrix.size()-1; // --
        int right_bound = matrix[0].size()-1; //--
        int left_bound = 0; // ++

        int total_element = matrix.size() * matrix[0].size() -1; 
        if(matrix.size() == 1)
        {
            return matrix[0];
        }

        if(matrix[0].size() == 1)
        {
            for(int i = 0 ;i < matrix.size(); i++)
            {
                vec.push_back(matrix[i][0]);
            }
        
            return vec;
        }
        int n = 0;
        int i = 0;
        int j = 0;
        bool fill_left = false;
        bool fill_right = true;
        bool fill_down = false;
        bool fill_up = false;
        vec.push_back(matrix[0][0]);
        std::cout<<"Total number : "<<total_element<<std::endl;
        while(n < total_element)
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

            vec.push_back(matrix[i][j]);
            // std::cout<<"i : "<<i<<" j : "<<j<<std::endl;
            std::cout<<"Added Element : "<<matrix[i][j]<<std::endl;
            cout<<"---------------------"<<endl;
            n++;
        }
        return vec;
    }
};

int main()
{
Solution _Solution;
vector<vector<int>> matrix{
    {1, 2, 3 , 4},
    {5, 6, 7 , 8},
    {9 ,10,11, 12},
    {13,14,15, 16}
};
vector<int> vec = _Solution.spiralOrder(matrix);
    for(auto v : vec)
    {
        std::cout<<v<<",";
    }
    std::cout<<std::endl;

    return 0;
}