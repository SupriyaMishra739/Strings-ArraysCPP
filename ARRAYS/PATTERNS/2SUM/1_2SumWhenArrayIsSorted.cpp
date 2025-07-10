#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(int arr[], int size, int sum)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int current_sum = arr[start] + arr[end];
        if (current_sum == sum)
        {
            return {arr[start], arr[end]};
        }
        else if (current_sum > sum)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return {-1}; // No pair found
}

int main()
{
    int arr[] = {2, 7, 11, 15, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    vector<int> res = TwoSum(arr, size, target);

    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}
