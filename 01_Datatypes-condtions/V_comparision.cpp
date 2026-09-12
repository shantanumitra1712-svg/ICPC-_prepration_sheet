#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    bool is_correct = false;

    if (s == '<')
    {
        is_correct = a < b;
    }
    else if (s == '>')
    {
        is_correct = a > b;
    }
    else if (s == '=')
    {
        is_correct = (a == b);
    }

    if (is_correct)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}