#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[1005];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int count_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count_min++;
        }
    }

    if (count_min % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    return 0;
}