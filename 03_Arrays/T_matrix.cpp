#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[105][105];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum_primary = 0;
    int sum_second = 0;

    for (int i = 0; i < n; i++)
    {
        sum_primary += arr[i][i];
        sum_second += arr[i][n - 1 - i];
    }

    int diff = abs(sum_primary - sum_second);

    cout << diff << endl;

    return 0;
}