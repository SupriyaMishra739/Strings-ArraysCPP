#include <iostream>
using namespace std;

void print1ton(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    print1ton(n - 1);
    cout << n << " ";
}

// 1 2 3 4 5
int main()
{
    int n = 5;
    print1ton(n);
}