#include <iostream>
using namespace std;

int main()
{
    int X = 5;
    int k = 1;
    if ((X & (1 << k)) > 0)

    {
        cout << "kth  it is set";
    }
    else
        cout << "kth   is not set";
}