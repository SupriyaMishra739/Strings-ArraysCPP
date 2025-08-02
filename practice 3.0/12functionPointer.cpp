#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*funcPointer)(int, int);

    funcPointer = add;

    cout << funcPointer(7, 3);
}