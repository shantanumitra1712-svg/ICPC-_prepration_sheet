#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double a, b;
    cin >> a >> b;
    long double num = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(num) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(num) << endl;
    cout << "round " << a << " / " << b << " = " << round(num) << endl;

    return 0;
}