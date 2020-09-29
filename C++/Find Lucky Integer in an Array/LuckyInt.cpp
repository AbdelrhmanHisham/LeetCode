#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {

        multimap<int,int> Map; 
        
        map<int,int> freq;
        for(int i =0 ; i < arr.size() ; i++){
            Map.insert(pair<int,int> (arr[i] , i));
        }   

        for (int i = 0; i < arr.size(); i++)
        {
            if(Map.count(arr[i]) == arr[i]){
                freq.insert(pair<int,int> (arr[i],i));
            }   
        }

        if (!freq.empty()){
            return (--freq.end())->first;
        }

        return -1;
    }
};

int main(){


Solution s;

// vector<int> arr {1,2,2,3,3,3,4};
vector<int> arr {2,2,3,4};

cout<< s.findLucky(arr) << endl;
return 0;
}