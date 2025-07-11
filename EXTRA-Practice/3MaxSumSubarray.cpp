#include <iostream>
using namespace std;
#include <vector>
#include <math.h>

int MaxSumSubaar(vector<int> v)
{
    int prefix = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        prefix += v[i];
        maxi = max(prefix, maxi);

        if (v[i] < 0)
        {
            prefix = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> v = {3, 4, -5, 8, -12, 7, 6, -2};
    cout << MaxSumSubaar(v);
}