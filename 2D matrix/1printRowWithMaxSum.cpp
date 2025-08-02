#include <iostream>
using namespace std;

int printRowWithMaxSum(int arr[][4], int row, int col)
{
    int sum = 0;
    int maxSum = INT_MIN;
    int index = -1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j]; // ✅ Correct indexing

            if (sum > maxSum)
            {
                maxSum = sum;
                index = i;
            }
        }
        sum = 0;
    }
    return index;
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    cout << printRowWithMaxSum(arr, 4, 4);
}