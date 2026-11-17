#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[10005], b[10005];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int cnt = 0;

    for (int i = 0; i < n && cnt < m; i++)
    {
        if (a[i] == b[cnt])
        {
            cnt++;
        }
    }

    if (cnt == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}