#include <iostream>
using namespace std;
#include <vector>

bool vectorPalindrome(vector<int> &v)
{
    vector<int> original = v;
    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {
        // swap
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    return original == v;
}

int main()
{
    vector<int> v = {1, 2, 3, 2, 1};
    cout << vectorPalindrome(v);
}