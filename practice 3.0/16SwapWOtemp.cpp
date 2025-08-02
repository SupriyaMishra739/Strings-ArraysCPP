#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    a = a ^ b; // a= 2^3
    b = a ^ b; //   2^0 ==>2
    a = a ^ b; //  2^3 ^2 ==>3
    cout << a << " " << b;

    cout << " ======================" << endl;
    // a=3 b=2
    a = a + b; // a=5
    b = a - b; // 5-2=3
    a = a - b; // 5-3=2
    cout << a << " " << b;
}