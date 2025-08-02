#include <iostream>
using namespace std;
// removeConsecutiveDuplicates
#include <unordered_set>
#include <vector>
#include <algorithm> // for reverse

// Input : arr = [ 1, 2, 3, 4, 5, 6, 7 ], k = 3 Output : [ 5, 6, 7, 1, 2, 3, 4 ]

vector<int> rotateArray(vector<int> &v, int k)
{
    int n = v.size();
    k = k % n; // handle k > n

    // Step 1: Reverse the entire array
    reverse(v.begin(), v.end());

    // Step 2: Reverse the first k elements
    reverse(v.begin(), v.begin() + k);

    // Step 3: Reverse the remaining n-k elements
    reverse(v.begin() + k, v.end());

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    rotateArray(v, 2);

    for (int i : v)
    {
        cout << i << " ";
    }
}