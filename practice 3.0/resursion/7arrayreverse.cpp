#include <iostream>
using namespace std;
#include <vector>

vector<int> vectorRev(vector<int> &v)
{
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

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vectorRev(v);
    for (int i : v)
    {
        cout << i << " ";
    }
}