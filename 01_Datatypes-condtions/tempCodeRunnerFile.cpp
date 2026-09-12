#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    double left = a * log((double)b);
    double right = c * log((double)d);

    if (left > right)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}