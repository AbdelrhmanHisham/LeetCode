#include <string>
#include <map>
#include <iostream>
using namespace std;

class Solution
{
public:
    string arrangeWords(string text)
    {
        text[0] = char((int)text[0] + 32);

        multimap<int, string> Map;
        string ordered;
        string holder;
        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] != ' ')
            {
                holder += text[i];
            }
            else
            {
                Map.insert(pair<int, string>(holder.size(), holder));
                holder = "";
            }
        }
        Map.insert(pair<int, string>(holder.size(), holder));

        // auto it = Map.begin();

        // for (int i = 0; it != Map.end(); i++)
        // {
        //     cout << "Size : " << it->first << " Value : " << it->second << endl;
        //     it++;
        // }

        auto it = Map.begin();

        for (int i = 0; it != Map.end(); i++)
        {
            ordered +=it->second;
            ordered +=" ";
            it++;
        }

        ordered[0] = char((int)ordered[0] - 32);
        ordered.erase(ordered.size()-1);
        return ordered;
    }
};

int main()
{

    Solution s;
    cout << s.arrangeWords("Leetcode is cool");

    return 0;
}