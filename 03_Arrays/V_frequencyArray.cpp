#include <iostream>
using namespace std;

int main()
{
    int n, m;

    int arr[1005];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int new_el;
        int count = 0;
        for (int j = 1; j <= m; j++)
        {
            int new_el = arr[j];
            if (arr[i] == new_el)
            {
                count++;
            }
        }
        cout << count;
    }
    return 0;
}