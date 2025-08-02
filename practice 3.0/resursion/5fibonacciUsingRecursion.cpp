#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    // 0 1 1 2 3

    int n = 2;
    cout << fib(n);
}