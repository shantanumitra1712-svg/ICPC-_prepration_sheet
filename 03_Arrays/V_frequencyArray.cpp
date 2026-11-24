// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[10005];
//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (i == arr[j])
//             {
//                 count++;
//             }
//         }
//         cout << count << "\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int cnt[100005];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= m; i++)
        cout << cnt[i] << "\n";
    return 0;
}