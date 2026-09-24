#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[1005];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int max_index = 0;

    int minimum = arr[0];
    int min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
            max_index = i;
        }

        if (minimum > arr[i])
        {
            minimum = arr[i];
            min_index = i;
        }
    }

    swap(arr[min_index], arr[max_index]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}