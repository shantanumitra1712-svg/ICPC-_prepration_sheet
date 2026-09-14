#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // X discount
    // P price after discount

    float x, p, rp;
    cin >> x >> p;

    rp = (100 * p) / (100 - x);

    cout << fixed << setprecision(2) << rp << endl;

    return 0;
}