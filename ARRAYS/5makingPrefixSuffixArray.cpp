#include <iostream>
using namespace std;
#include <vector>

int main()
{

    vector<int> Vec = {6, 4, 5, -3, 2, 8};
    vector<int> v(6);  // prefix array
    vector<int> sv(6); // suffix array

    v[0] = Vec[0];

    // prefix array
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + Vec[i];
    }

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // suffix array

    sv[Vec.size() - 1] = Vec[Vec.size() - 1];

    // prefix array
    for (int i = Vec.size() - 2; i >= 0; i--)
    {
        sv[i] = sv[i + 1] + Vec[i];
    }

    for (int i : sv)
    {
        cout << i << " ";
    }
}