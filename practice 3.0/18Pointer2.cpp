#include <iostream>
using namespace std;

int main()
{
    // dynamic memory allocation - craete a poinetr and then a array

    int *p = new int(10);

    cout << *p; // this is a variable p

    // create a array
    int size;
    cout << "give the size:" << endl;
    cin >> size;
    int *q = new int[size];
    cout << "give the elements:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> q[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << q[i] << " ";
    }
}