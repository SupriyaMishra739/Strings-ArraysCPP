#include <iostream>
using namespace std;

int main()
{

    int *p = new int;
    *p = 10;
    cout << *p << endl;

    int *q = new int(10);
    cout << *p;

    cout << "array size" << endl;
    int size;
    cin >> size;
    int *j = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> j[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << j[i] << " ";
    }
}