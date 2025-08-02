#include <iostream>
using namespace std;

void printnto1(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    printnto1(n - 1);
}

// 1 2 3 4 5
int main()
{
    int n = 5;
    printnto1(n);
}