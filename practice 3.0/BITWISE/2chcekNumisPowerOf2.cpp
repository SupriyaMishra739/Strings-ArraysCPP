#include <iostream>
using namespace std;

// 4-->0100
// 3-->0011
// &-->0000 -->0
// X &(X-1)
int main()
{
    int X = 4;
    if (X == 0)
    {
        cout << "not a power of 2";
    }
    else
    {
        if ((X & (X - 1)) == 0)
        {
            cout << "power of 2";
        }
        else
            cout << "not a power of 2";
    }
}