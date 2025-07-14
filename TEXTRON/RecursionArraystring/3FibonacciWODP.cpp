#include <iostream>
using namespace std;

// What to do : Generate nth Fibonacci number.

// Without DP : plain recursion

//     With DP : memoization to avoid recomputation

// Input: n = 5
// Expected Output : 5 Explanation : Sequence : 0, 1, 1, 2, 3, 5

int Fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    cout << Fib(10);
}