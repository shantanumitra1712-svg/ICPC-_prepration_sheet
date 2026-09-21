#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    long long a = 0;
    long long b = 1;
    long long c = 0;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        b = a;
        a = c;
    }

    cout << c << endl;

    return 0;
}