#include <iostream>
using namespace std;

int main()
{

    int m, n;
    int arr[105][105];

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;
    bool found = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "will take number" << endl;
    }
    else
    {
        cout << "will not take number" << endl;
    }

    return 0;
}