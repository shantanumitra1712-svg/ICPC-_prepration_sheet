#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        int count = 0;

        while (num % 2 == 0)
        {
            num /= 2;
            count++;
        }

        if (count > max)
        {
            max = count;
        }
    }

    cout << max;
    return 0;
}