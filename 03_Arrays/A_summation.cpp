#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long arr[100000];
    long long n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << abs(sum);
    return 0;
}