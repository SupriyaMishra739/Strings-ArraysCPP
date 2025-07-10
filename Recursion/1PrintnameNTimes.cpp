#include <iostream>
using namespace std;

void printNames(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "supriya" << " ";

    return printNames(n - 1);
}

int main()
{

    printNames(5);
}