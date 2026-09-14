#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int d = a - b;

    if (d >= 0)
    {
        cout << d << endl;
    }

    else
    {
        cout << 0 << endl;
    }
    return 0;
}