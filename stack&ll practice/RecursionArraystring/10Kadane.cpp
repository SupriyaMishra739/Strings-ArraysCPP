#include <iostream>
using namespace std;
#include <vector>

// 🔷 9. Kadane’s Algorithm (Maximum Subarray Sum)
//  What to do: Find the maximum sum of any contiguous subarray.s
// Test Case 1:
// Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Expected Output: 6
// Explanation: [4, -1, 2, 1]

int kadane(vector<int> v)
{
    int maxi = INT_MIN;
    int prefix = 0;

    for (int i = 0; i < v.size(); i++)
    {
        prefix = prefix + v[i];
        if (prefix < 0)
        {
            prefix = 0;
        }
        maxi = max(maxi, prefix);
    }
    return maxi;
}

int main()
{
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << kadane(v);
}