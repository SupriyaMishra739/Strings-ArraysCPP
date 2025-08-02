#include <iostream>
#include <cstdlib> // for malloc, calloc, realloc, free
using namespace std;
//❤️❤️💕💕⭐⭐👍

int main()
{
    // malloc: allocate memory for 5 integers (uninitialized)
    int *arr1 = (int *)malloc(5 * sizeof(int));

    cout << "malloc (uninitialized): ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " "; // may print garbage values
    }
    cout << endl;

    // calloc: allocate memory for 5 integers (initialized to 0)
    int *arr2 = (int *)calloc(5, sizeof(int));

    cout << "calloc (initialized to 0): ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " "; // will print 0s
    }
    cout << endl;

    // realloc: resize arr2 to hold 10 integers
    arr2 = (int *)realloc(arr2, 10 * sizeof(int));

    cout << "realloc (expanded to 10): ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " "; // first 5 are 0, rest are uninitialized
    }
    cout << endl;

    // free: deallocate memory
    free(arr1);
    free(arr2);

    return 0;
}
