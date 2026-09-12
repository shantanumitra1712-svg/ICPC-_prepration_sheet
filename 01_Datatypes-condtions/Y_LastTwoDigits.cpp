#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long mul = ((a % 100) * (b % 100) % 100) * (c % 100) % 100 * (d % 100) % 100;

    cout << setw(2) << setfill('0') << mul << endl;

    return 0;
}