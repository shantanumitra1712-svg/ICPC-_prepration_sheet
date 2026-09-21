#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long max = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;

    return 0;
}