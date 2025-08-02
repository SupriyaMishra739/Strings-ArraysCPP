#include <iostream>
using namespace std;

// 3x4
//

int main()
{

    int **twod = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        twod[i] = new int[4];
    }
    cout << endl;
    cout << "give values:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> twod[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << twod[i][j] << " ";
        }
    }

    // delete

    for (int i = 0; i < 3; i++)
    {
        delete[] twod[i];
    }

    delete[] twod;
}