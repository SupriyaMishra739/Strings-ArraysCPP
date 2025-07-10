// UNORDERED_MAP PRACTICE

#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>

int main()
{
    unordered_map<char, int> unMap;

    unMap['a'] = 2;
    unMap['b'] = 2;
    unMap['c'] = 2;
    unMap['a'] = 3;

    for (auto it : unMap)
    {
        cout << it.first << "-> " << it.second << endl;
    }

    // trying with vector addition

    unordered_map<char, vector<int>> uMap;

    uMap['a'] = {2};
    uMap['b'] = {2, 5, 6, 6};
    uMap['c'] = {2, 0, 7, 5};
    uMap['d'] = {2, 1, 2, 4, 6, 7, 32, 9};

    for (auto it : uMap)
    {
        cout << it.first;
        for (int val : it.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}