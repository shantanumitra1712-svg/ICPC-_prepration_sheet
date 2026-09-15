#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1005];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    while (i < n / 2)
    {
        swap(arr[i], arr[n - i - 1]);
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}