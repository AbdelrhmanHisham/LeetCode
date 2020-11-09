#include <vector>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    vector<int> vec{0, 1, 0, 3, 12};
    // sort_heap(vec.begin(),vec.end()+1);
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    return 0;
}