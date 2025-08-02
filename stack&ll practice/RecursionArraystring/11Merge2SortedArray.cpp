// Input: [1,3,5], [2,4,6]
// Expected Output : [ 1, 2, 3, 4, 5, 6 ]

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    vector<int> res;

    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
            res.push_back(v1[i++]);
        else if (v1[i] > v2[j])
            res.push_back(v2[j++]);
        else
        {
            res.push_back(v1[i]); // push once
            i++;
            j++;
        }
    }
    while (i < v1.size())
        res.push_back(v1[i++]);
    while (j < v2.size())
        res.push_back(v2[j++]);

    return res;
}

int main()
{
    vector<int> v1 = {1, 3, 5};
    vector<int> v2 = {2, 4, 6, 3};
    vector<int> res = mergeArray(v1, v2);

    for (int it : res)
        cout << it << " ";
}
