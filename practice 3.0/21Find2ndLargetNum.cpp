#include <iostream>
using namespace std;
#include <vector>
#include <climits>

int main()
{
    vector<int> v = {5, 7, 8, 8, 10, 7};
    int maxi = INT_MIN;
    int secMaxi = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > maxi)
        {
            maxi = v[i];
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > secMaxi && v[i] != maxi)
        {
            secMaxi = v[i];
        }
    }

    cout << maxi << " " << secMaxi;
}