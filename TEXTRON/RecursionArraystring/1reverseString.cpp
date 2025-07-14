// Reverse the order of elements using two pointers.
// Input: "hello"
// Expected Output : "olleh"

#include <iostream>
using namespace std;
#include <string>

string reverseString(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        // swap
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    return s;
}

int main()
{
    string word = "hello";
    cout << reverseString(word);
}
