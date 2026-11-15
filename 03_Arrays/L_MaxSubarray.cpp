#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[105];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int curr_max = a[i];

            for (int j = i; j < n; j++)
            {
                if (curr_max < a[j])
                {
                    curr_max = a[j];
                }
                cout << curr_max << " ";
            }
        }
        cout << endl;
    }

    return 0;
}