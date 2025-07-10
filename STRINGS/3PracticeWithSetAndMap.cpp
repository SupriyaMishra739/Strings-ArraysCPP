#include <iostream>
using namespace std;
#include <set>
#include <unordered_set>
#include <map>

int main()
{
    // SET
    set<char> settings;
    settings.insert('c');
    settings.insert('a');
    settings.insert('a');
    for (char c : settings)
    {
        cout << c << " ";
    }
    cout << endl;
    settings.erase('a'); // erase
    for (char c : settings)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << "UNORDERED_SET" << endl;
    // UNORDERED_SET

    unordered_set<char> un;
    un.insert('a');
    un.insert('a');
    un.insert('b');
    un.insert('b');
    un.insert('c');
    un.insert('d');

    for (char i : un)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    if (un.count('b'))
    {
        un.erase('b');
    }
    for (char i : un)
    {
        cout << i << " ";
    }
    cout << "--------------------------------------------------------";

    cout << endl;
    cout << "MAP" << endl;
    // MAP

    map<char, int> m;

    // Insert elements
    m['a'] = 1;
    m['b'] = 1;
    m['c'] = 2;
    m['a'] = 2; // This updates the value of 'a' from 1 to 2
    m['d'] = 5;

    // Print map elements
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}