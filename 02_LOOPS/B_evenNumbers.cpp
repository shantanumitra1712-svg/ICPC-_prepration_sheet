#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    if (num <= 1)
    {
        cout << -1 << endl;
    }

    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}