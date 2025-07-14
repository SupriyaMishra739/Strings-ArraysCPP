#include <iostream>
using namespace std;
// 🔷 3. Factorial (recursive)
// What to do : Multiply n × (n - 1) × ... × 1 using recursion

int Fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * Fact(n - 1);
}
int main()
{

    int n = 5;
    cout << Fact(5);
}