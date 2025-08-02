#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <unordered_set>
#include <vector>

int MissingNumFrom1ToN(vector<int> v, int n)
{
    int totalSum = (n * (n + 1)) / 2;
    int arrSum = 0;

    for (int it : v)
    {
        arrSum += it;
    }
    return totalSum - arrSum;
}
main()
{
    cout << MissingNumFrom1ToN({1, 2, 3, 4, 6, 5, 8}, 8);
}