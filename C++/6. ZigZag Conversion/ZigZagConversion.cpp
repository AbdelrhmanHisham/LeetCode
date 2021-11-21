#include <iostream>
#include <string>
#include <vector>


using namespace std;



class ZigZagConversion
{
    public:
    string convert(string s, int numRows) 
    {
        string result;
        vector<vector<char>> vec( numRows);
        cout<<"vec size : "<<vec.size()<<endl;

        if (s.size() <= numRows || numRows==1 )
            return s;

        int x = 0,y=0;
        bool fill_col = true;
        for(int i = 0; i < s.size() ; i ++)
        {
         
            vec[x].push_back(s[i]);


            std::cout<<"vec[x][y]: "<<vec[x][y]<<std::endl;
            std::cout<<"X: "<<x<<"      y:"<<y<<std::endl;
            if (x == numRows-1 || fill_col == false)
            {
                x--;
                y++;
                fill_col = false;
            }else if (x == 0 || fill_col == true)
            {
                fill_col = true;
                x++;
            }

            if(x == 0)
            {
                
                fill_col = true;
            }

        }

        std::cout<<"----------------------"<<std::endl;
        std::cout<<"----------------------"<<std::endl;
        std::cout<<"----------------------"<<std::endl;
        

        for(int i = 0; i < vec.size() ; i++)
        {
            for(int j = 0; j < vec[i].size() ; j++)
            {
                
                result.push_back(vec[i][j]);
                std::cout<<"i: "<<i<<"      j:"<<j<<std::endl;
                cout<<"vec[i][j] : "<<vec[i][j]<<std::endl;
                std::cout<<"----------------------"<<std::endl;


            }
        }
        return result;
    }



    string convert2(string s, int numRows) 
    {
        if (numRows == 1) return s;

        vector<string> rows(min(numRows, int(s.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;
            cout<<"curRow : "<<curRow<<endl;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;


        }

        string ret;
        for (string row : rows) ret += row;
        return ret;
    }
    
    string convert3(string s, int numRows) 
    {
        string ret;
        if (numRows == 1) return s;

        int constant_offset = 2*numRows-2;
        for(int i = 0; i <numRows ; i++)
        {
            for(int j = 0; j+i <s.size() ; j += constant_offset)
            {
                ret +=s[j+i];
                if(i != 0 && i != numRows-1 && j + constant_offset - i < s.size())
                {
                    ret +=s[j + constant_offset - i];
                }
            }

        }
        return ret;
    }

};

// "PINALSIGYAHRPI"
// "PINALIGYAIHRNPI"
int main()
{
    ZigZagConversion _ZigZagConversion;
    int num_of_rows = 4;
    string str = "PAYPALISHIRING";


    string converted_string = _ZigZagConversion.convert3(str, num_of_rows);
    cout<<"converted_string  : "<<converted_string<<endl;

    return 0;
}