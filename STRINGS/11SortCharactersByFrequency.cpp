// Sort Characters by Frequency
// ✅✅❤️❤️💕💕💕💕💕 LEART MAKING CUSTOM COMAPRATOR
// You are given a string s. Return the array of unique characters, sorted by highest to lowest occurring characters.

// If two or more characters have same frequency then arrange them in alphabetic order.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<char> frequencySort(string &word)
    {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : word)
        {
            freq[c]++;
        }

        // Move unique characters into a vector
        vector<char> chars;
        for (auto &entry : freq)
        {
            chars.push_back(entry.first);
        }

        // Sort based on frequency, then alphabetically
        // ✅✅❤️❤️💕💕💕💕💕 LEART MAKING CUSTOM COMAPRATOR
        sort(chars.begin(), chars.end(), [&](char a, char b)
             {
                 if (freq[a] != freq[b])
                     return freq[a] > freq[b]; // higher freq first
                 return a < b;                 // alphabetical if same freq
             });

        return chars;
    }
};

int main()
{
    string input = "tree";
    Solution sol;

    vector<char> result = sol.frequencySort(input);

    cout << "Sorted characters by frequency: ";
    for (char c : result)
    {
        cout << "'" << c << "' ";
    }
    cout << endl;

    return 0;
}
