#include <iostream>
using namespace std;

int main()
{
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long fact = 1;
        cin >> num;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }

        cout << fact << endl;
        fact = 1;
    }
    return 0;
}