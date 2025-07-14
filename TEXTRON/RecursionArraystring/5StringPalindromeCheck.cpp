#include <iostream>
using namespace std;

// 🔷 4. Palindrome String Check
// What to do : Check if a string reads the same forwards and backwards.

// Test Case 1 :
// Input : "racecar" Expected Output : true Test Case 2 :
//  Input : "hello" Expected Output : false int

bool PalindromeCheck(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
main()
{

    if (PalindromeCheck("racecar"))
    {
        cout << "true";
    }
    else
        cout << "false";
}