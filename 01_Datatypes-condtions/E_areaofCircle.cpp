#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    long double r;
    cin >> r;
    cout << 3.141592653 * r * r;

    return 0;
}