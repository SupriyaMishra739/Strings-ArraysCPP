#include <iostream>
using namespace std;
#include <vector>

// first and last

// 5 7 7 8 8 10
// target =8

int main()
{

    vector<int> v = {5, 7, 8, 8, 10, 7};
    int first = -1; // index
    int target = 7;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            first = i;
            break;
        }
    }
    int last = -1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == target)
        {
            last = i;
            break;
        }
    }

    cout << first << " " << last;
}