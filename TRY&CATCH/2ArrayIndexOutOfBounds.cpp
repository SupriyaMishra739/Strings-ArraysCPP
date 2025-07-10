
// 🔹 2. Array Index Out of Bounds
// Problem: Ask the user for an index and print the element from an array. If the index is out of range, throw an error.

// ✅ Concepts: try-catch for invalid index
// 🧠 Tip: if (index < 0 || index >= size) throw

#include <iostream>
using namespace std;

float Divide(int &n, int &m)
{
    if (m == 0)
    {
        throw "Error: Cannot divide by zero.";
    }

    return (float)n / m;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int index;
    int size = 5;

    cout << "enter a index you want to know the value , index starts from 0" << endl;

    try
    {
        cin >> index;
        if (index < 0 || index >= size)
        {
            throw "index out of bounds";
            return 0;
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    cout << arr[index];
}
