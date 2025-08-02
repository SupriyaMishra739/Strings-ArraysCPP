#include <iostream>
using namespace std;

int powerfunc(int n, int k)
{ // 2 , 3 ==> 2^3=8
    if (k == 1)
    {
        return n;
    }

    return n * powerfunc(n, k - 1); // 2* pf(2) --> 2*2*pf(1) -->2*@*2=8
}

int main()
{
    int n = 3;
    int k = 2;

    cout << powerfunc(n, k);
}