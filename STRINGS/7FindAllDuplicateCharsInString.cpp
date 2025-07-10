// Find all duplicate characters in a string(and their counts).
// 🔹 Input : "aabccddee" → Output : 'a' : 2, 'c' : 2, 'd' : 2, 'e' : 2

#include <iostream>
using namespace std;
#include <map>

map<char, int> duplicateCharsInArray(string &word)
{
    map<char, int> m;
    map<char, int> res;

    for (char ch : word)
    {
        m[ch]++;
    }

    for (auto it : m)
    {
        if (it.second > 1)
        {
            res[it.first] = it.second;
        }
    }
    return res;
}

int main()
{
    string word = "aabccddeefff";
    map<char, int> result = duplicateCharsInArray(word);
    for (auto it : result)
    {
        cout << it.first << "->" << it.second << endl;
    }
}
