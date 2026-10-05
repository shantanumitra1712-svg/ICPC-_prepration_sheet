#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;

        int arr[105];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minVal = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = arr[i] + arr[j] + j - i;
                if (minVal > result)
                {
                    minVal = result;
                }
            }
        }
        cout << minVal << "\n";
    }
    return 0;
}