#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = {1, 0, 1, 0, 1, 0, 1, 0, 0};

    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {
        if (v[i] == 1 && v[j] == 0)
        {
            // swap
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            i++;
            j--;
        }
        else if (v[i] == 0 && v[j] == 1) // correct
        {
            i++;
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }
        else if (v[j] == 1)
        {
            j--;
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }
}