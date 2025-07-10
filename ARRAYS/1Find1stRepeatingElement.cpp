//  Find the first repeating element

// ✅ Test Case 1 : Basic Repetition
//                      Input : arr = [ 10, 5, 3, 4, 3, 5, 6 ] Expected Output : 5 Explanation : Both 5 and 3 repeat,
//                              but 5 appears first in the array.

// ✅ Test Case 2 : No Repetition
//                       Input : arr = [ 1, 2, 3, 4, 5 ] Expected Output : -1 Explanation : No element repeats.

#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int ReturnFirstDuplicateElement(int arr[], int size)
{
    unordered_map<int, int> indexMap; // store element -> first index
    int minIndex = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (indexMap.count(arr[i]))
        {
            minIndex = min(minIndex, indexMap[arr[i]]);
        }
        else
        {
            indexMap[arr[i]] = i;
        }
    }

    return (minIndex == INT_MAX) ? -1 : arr[minIndex];
}

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    cout << ReturnFirstDuplicateElement(arr, 7); // Output should be 5
}
