// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     long long max = -1;

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         long long num;
//         cin >> num;

//         if (num > max)
//         {
//             max = num;
//         }
//     }
//     cout << max << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[1005];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}