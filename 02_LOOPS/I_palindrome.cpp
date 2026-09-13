#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;

    cin >> num;

    int orig = num;

    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (orig == rev)
    {
        cout << rev << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << rev << endl;
        cout << "NO" << endl;
    }

    return 0;
}