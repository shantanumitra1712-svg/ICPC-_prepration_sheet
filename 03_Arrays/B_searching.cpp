#include <iostream>
using namespace std;

int main()
{
    long long arr[100005];

    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long target;
    cin >> target;

    bool found = false;

    for (long long i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << -1;
    }
    return 0;
}