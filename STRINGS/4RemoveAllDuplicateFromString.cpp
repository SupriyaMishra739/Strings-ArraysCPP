// Remove all duplicate characters from a string but keep the first occurrences.
// 🔹 Input : "programming" → Output : "progamin"

#include <iostream>
using namespace std;
#include <unordered_set>

void removeAllDuplicates(string &word)
{
    unordered_set<char> unSet;

    for (char ch : word)
    {
        unSet.insert(ch);
    }

    for (char ch : word)
    {
        if (unSet.count(ch))
        {
            cout << ch;
            unSet.erase(ch);
        }
    }
}

int main()
{
    string word = "programming";
    removeAllDuplicates(word);

    return 0;
}