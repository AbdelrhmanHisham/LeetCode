#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;



int main()
{
    vector<int> vec{1,2,3,4,5,6,7};
    reverse(vec.begin() +2  , vec.begin() + 4);
    for (auto v : vec)
    {
        cout<<v<<", ";
    }
    
    cout<<endl;
    
    // reverse(vec.begin() , vec.begin() + 2);

}