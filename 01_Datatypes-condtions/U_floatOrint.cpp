#include <iostream>
using namespace std;

int main()
{
    double num;
    cin >> num;
    int n = (int)num;
    double dec = num - n;
    if (dec == 0)
    {
        cout << "int " << n << endl;
    }
    else
    {
        cout << "float " << n << " " << dec << endl;
    }

    return 0;
}