// Find all strings in an array that are anagrams of each other.
// 🔹 Input : [ "listen", "silent", "rat", "tar", "art" ]
// 🔹 Output : [ ("listen", "silent"), ("rat", "tar", "art") ]

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> // ✅ Needed for sort
using namespace std;

void StringAnagramOfEachOther(string words[], int size)
{
    unordered_map<string, vector<string>> uMap;

    for (int i = 0; i < size; i++)
    {
        string sorted = words[i];
        sort(sorted.begin(), sorted.end()); // ✅ sort needs <algorithm>
        uMap[sorted].push_back(words[i]);
    }

    // Print only groups with more than 1 anagram
    for (auto it : uMap)
    {
        if (it.second.size() > 1)
        {
            cout << "( ";
            for (string s : it.second)
            {
                cout << "\"" << s << "\" ";
            }
            cout << ")" << endl;
        }
    }
}

int main()
{
    string arr[] = {"listen", "silent", "rat", "tar", "art"};
    StringAnagramOfEachOther(arr, 5);
}
