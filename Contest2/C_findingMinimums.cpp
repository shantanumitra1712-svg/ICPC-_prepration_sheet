#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[100005];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i += k)
    {
        int minimum = arr[i];

        for (int j = i; j < i + k && j < n; j++)
        {
            minimum = min(minimum, arr[j]);
        }
        cout << minimum << " ";
    }
    return 0;
}