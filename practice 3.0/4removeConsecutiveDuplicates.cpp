#include <iostream>
using namespace std;
// removeConsecutiveDuplicates
#include <unordered_set>

// Input:  "aaabbbccdaa"  Output: "abcda"

string removeConsecutiveDuplicates(string word)
{
    string res = "";
    res = res + word[0];

    for (int i = 1; i < word.length(); i++)
    {

        if (word[i] != word[i - 1])
        {
            res = res + word[i];
        }
    }
    return res;
}

int main()
{
    string word = "aaabbbccdaapp";
    cout << removeConsecutiveDuplicates(word);
}