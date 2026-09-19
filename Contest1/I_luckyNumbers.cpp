#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lastDigit = n % 10;
    int firstDigit = n / 10;

    if (lastDigit == 0 || lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}