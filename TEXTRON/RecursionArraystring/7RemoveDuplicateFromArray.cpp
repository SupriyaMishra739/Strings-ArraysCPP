#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <unordered_set>
#include <vector>

void RemoveDuplicate(vector<int> v) // 1 1 2 3 4  5
{
    unordered_set<int> unSet;

    for (int i : v)
    {
        unSet.insert(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (unSet.count(i))
        {
            cout << i << " ";
            unSet.erase(i);
        }
    }
}
main()
{
    vector<int> v = {1, 1, 2, 3, 3, 4, 4, 4, 5};
    RemoveDuplicate(v);
}