#include <iostream>
using namespace std;
#include <vector>
int EqualSubarrayOrNOt(vector<int> &arr)
{
    // Code here
    // 1)find total sum
    int totalsum = 0;
    for (int i : arr)
    {
        totalsum = totalsum + i;
    }

    // 2) find prefix and loop though the array till 2nd last element
    int prefix = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        prefix = prefix + arr[i];

        int ans = totalsum - prefix;
        if (ans == prefix)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    vector<int> v = {3, 4, -2, 5, 8, 20, -10, 8};

    int res = EqualSubarrayOrNOt(v);

    cout << res;
}