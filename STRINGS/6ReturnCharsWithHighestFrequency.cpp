// Count and return the character(s) with the highest frequency in a string.
// 🔹 Input : "aabbbcddddd" → Output : 'd'(appears 5 times)

#include <iostream>
using namespace std;
#include <map>

void highestFrequency(string &word)
{
    map<char, int> m;

    for (char ch : word)
    {
        m[ch]++;
    }
    int max = INT_MIN;
    char ch = '\0';
    for (auto it : m)
    {
        if (it.second > max)
        {
            max = it.second;
            ch = it.first;
        }
    }
    cout << ch << " appears-->" << max << " times" << endl;
}

int main()
{
    string word = "aabbbcdddddeeeeeeee";
    highestFrequency(word);
}
