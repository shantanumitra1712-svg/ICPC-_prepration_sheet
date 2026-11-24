#include <iostream>
using namespace std;

int freq[100005];

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << "\n";
    }

    return 0;
}