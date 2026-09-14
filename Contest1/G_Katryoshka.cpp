#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long toy = 0;

    // 1 eye + 1 mouth + 1 body
    long long x = min({n, m, k});

    toy += x;
    n -= x;
    m -= x;
    k -= x;

    // 2 eyes + 1 body
    long long y = min(n / 2, k);

    toy += y;
    n -= y * 2;
    k -= y;

    cout << toy << endl;

    return 0;
}