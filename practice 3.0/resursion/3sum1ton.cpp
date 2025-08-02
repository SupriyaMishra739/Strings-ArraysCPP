#include <iostream>
using namespace std;

int sum1ton(int n)
{
    if (n == 1)
    {

        return 1;
    }

    return n + sum1ton(n - 1);
}

// 1 2 3 4 5
int main()
{
    int n = 5;
    cout << sum1ton(n);
}