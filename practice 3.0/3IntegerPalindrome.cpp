#include <iostream>
using namespace std;

bool integerPalindrome(int num)
{                       // 123
    int original = num; // orginal=123
    int reverse = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;           // 3
        reverse = reverse * 10 + lastDigit; // rev= 0*10+3=3
        num = num / 10;                     // 12
    }
    return original == reverse;
}

int main()
{
    int num = 122221;

    if (integerPalindrome(num))
    {
        cout << "yes palindrome!!";
    }
    else
        cout << "not palindrome!!";
}