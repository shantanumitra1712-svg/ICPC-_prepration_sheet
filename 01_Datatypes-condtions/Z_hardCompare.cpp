#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    double left = b * log((double)a);
    double right = d * log((double)c);

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