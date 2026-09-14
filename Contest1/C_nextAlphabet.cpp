#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c < 'z')
    {
        c += 1;
        cout << c << endl;
    }
    else
    {
        cout << 'a' << endl;
    }
    return 0;
}