#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return n * fact(n - 1);
}

int main()
{
    int n = 3;
    cout << fact(n);
    // factorial
    //  5= 5*4*3*2*1
}