#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int num;
    int even = 0, odd = 0, neg = 0, pos = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num > 0)
        {
            pos++;
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if (num < 0)
        {
            neg++;
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else
        {
            even++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}