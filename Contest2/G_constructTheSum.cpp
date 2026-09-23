#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, s;
        cin >> n >> s;

        vector<long long> ans;

        for (long long j = n; j >= 1 && s > 0; j--)
        {
            if (j <= s)
            {
                s -= j;
                ans.push_back(j);
            }
        }

        if (s != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (long long x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}