// Reverse the order of elements using two pointers.
// Input : [ 1, 2, 3, 4 ] Expected Output : [ 4, 3, 2, 1 ]
#include <iostream>
using namespace std;

#include <vector>

vector<int> reverseArray(vector<int> v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        // swap
        char temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> res = reverseArray(v);
    for (int i : res)
    {
        cout << i << " ";
    }
}
