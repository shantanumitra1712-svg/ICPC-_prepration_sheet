#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long min = a;
    long long max = a;
    if (min > b)
    {
        min = b;
    }
    if (max < b)
    {
        max = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (max < c)
    {
        max = c;
    }
    cout << min << " ";
    cout << max;

    return 0;
}