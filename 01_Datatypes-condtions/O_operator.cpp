#include <iostream>
using namespace std;

int main()
{
    char op;
    long long a, b;
    cin >> a >> op >> b;
    if (op == '+')
    {
        cout << a + b << endl;
    }
    else if (op == '-')
    {
        cout << a - b << endl;
    }
    else if (op == '*')
    {
        cout << a * b << endl;
    }
    else if (op == '/')
    {
        cout << a / b << endl;
    }
    return 0;
}