#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

// 🔷 6. Anagram Check
//     What to do : Check if two strings have the same characters with same frequency.

//  Test Case 1 :
//  Input : s = "listen",t = "silent" Expected Output : true Test Case 2 :

//  Input : s = "hello",t = "world" Expected Output : false

bool AnagramCheck(string s, string t)
{
    int sLen = s.length();
    int tLen = t.length();

    if (sLen != tLen)
    {
        return false;
    }
    else
    {

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
}
main()
{
    cout << AnagramCheck("listen", "silents");
}