#include <vector>
#include <iostream>
using namespace std;

int min_subarray(vector<int> vec, int taregt)
{
    int min_window_size = 10000;
    int current_sum = 0;
    int window_size = 0;
    int start = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        current_sum += vec[i];
        while (current_sum >= taregt)
        {
            min_window_size = min(min_window_size , i-start+1);
            current_sum -= vec[start];
            start++;
        }
    }
    return min_window_size;
}

int main()
{
    vector<int> vec {2,4,2,5,1};
    cout<<"max sum : "<<min_subarray(vec , 7);
    cout<<endl;
    return 0;
}