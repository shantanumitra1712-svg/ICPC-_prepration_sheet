#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long l, r;
        cin >> l >> r;

        if (l > r)
        {
            long long temp = l;
            l = r;
            r = temp;
        }

        long long sum = ((l + r) * (r - l + 1)) / 2;

        cout << sum << endl;
    }

    return 0;
}