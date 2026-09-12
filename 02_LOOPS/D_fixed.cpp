#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;

    while (cin >> num)
    {
        if (num == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}