#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 0, 1, 1};

    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;

    while (i < j)
    {
        if (arr[i] == 1)
        {
            i++;
        }
        else
        {
            if (arr[j] == 0)
            {
                j--;
            }
            else
            {
                // swap i and j
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}