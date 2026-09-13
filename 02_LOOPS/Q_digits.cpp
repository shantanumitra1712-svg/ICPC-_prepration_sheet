#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (num > 0)
            {
                int last = num % 10;
                cout << last << " ";
                num /= 10;
            }
            cout << endl;
        }
    }
    return 0;
}