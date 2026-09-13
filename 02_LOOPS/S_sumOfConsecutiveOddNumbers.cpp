#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        int start, end;

        if (x > y)
        {
            start = y;
            end = x;
        }
        else
        {
            start = x;
            end = y;
        }

        int oddSum = 0;
        for (int j = start + 1; j < end; j++)
        {
            if (j % 2 != 0)
            {
                oddSum += j;
            }
        }
        cout << oddSum << endl;
    }
    return 0;
}