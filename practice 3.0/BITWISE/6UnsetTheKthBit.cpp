#include <iostream>
using namespace std;

int main()
{
    int X = 5; // 101 ==>  111
    int k = 0;
    cout << ((X & ~(1 << k)));
}