#include <vector>
#include <iostream>
using namespace std;

int sum_of_k_elem(vector<int> vec, int k)
{
    int sum = 0;
    int current_sum = 0;

    int start = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        current_sum += vec[i];
        if(i-start+1 == k)
        {
            cout<<"i : "<<i<<endl;
            sum = max(current_sum , sum);
            current_sum -= vec[start];
            start++;
        }
    }
    return sum;
}

int main()
{
    vector<int> vec {2,3,4,1,5};
    cout<<"max sum : "<<sum_of_k_elem(vec , 3);
    cout<<endl;
    return 0;
}