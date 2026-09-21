#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int limit;
        long long sum;
        cin >> limit >> sum;

        vector<long long> ans;

        for (long long j = limit; j >= 1 && sum > 0; j--)
        {
            if (j <= sum)
            {
                sum -= j;
                ans.push_back(j);
            }
        }

        if (sum != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (long long x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}