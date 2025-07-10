#include <iostream>
using namespace std;
#include <map>

// Find the first non-repeating character in a string.
// 🔹 Input : "aabbcddbe" → Output : '

char FirstNonrepeatingChar(string &word)
{
    map<char, int> m;

    for (char ch : word)
    {
        m[ch]++;
    }

    for (char ch : word)
    {
        if (m[ch] == 1)
        {
            return ch;
        }
    }

    return '\0'; // if no repeating characters are found
}

int main()
{
    string word = "zaabbcddbe";
    cout << FirstNonrepeatingChar(word);

    return 0;
}