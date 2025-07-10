// You're given a string made up of lowercase letters, like "aaabbc". You need to compress the string by replacing each group of the same character with :

//     the character

//         followed by the count of its repetitions.

//     Return the compressed string.

// 🔹 Test Case 2
// Input : "abc" Output : "a1b1c1"
// ✅ Each letter appears once

// 🔹 Test Case 1
// Input : "a" Output : "a1"
// ✅ One 'a', so result is 'a1'

// 🔹 Test Case 3 Input : "aabbbaa" Output : "a2b3a2" ⭐⭐💕💕💕❤️ IMP test case
// ✅ 'a' x2, 'b' x3, 'a' x2 again

#include <iostream>
using namespace std;

// NOTE :❌ Issues in Your Code ✅✅❤️❤️❤️❤️❤️💕⭐
//         You're using an unordered_map<char, int> which counts total occurrences, but we need to count consecutive characters only.✅✅❤️❤️❤️❤️❤️💕⭐

string StringCompression(string &word)
{
    int count = 1;
    string res;

    for (int i = 1; i < word.length(); i++)
    {
        if (word[i - 1] == word[i])
        {
            count++;
        }
        else
        {
            res = res + word[i - 1];
            res = res + to_string(count);
            count = 1;
        }
    }

    // Add the last character group (loop ends before this)
    res = res + word.back();      // last char--> Take the last character of the string word, and add it to the result string res.
    res = res + to_string(count); // its count
    return res;
}

int main()
{
    string s = "aabbbaa";
    cout << StringCompression(s);
}