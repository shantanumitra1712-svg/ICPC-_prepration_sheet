#include <iostream>
using namespace std;

int main()
{
    int a, b;

    do
    {
        cin >> a >> b;

        int sum = 0;
        if (a <= 0 || b <= 0)
        {
            break;
        }
        else
        {
            int start, end;
            if (a > b)
            {
                start = b;
                end = a;
            }
            else
            {
                start = a;
                end = b;
            }

            for (int i = start; i <= end; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    } while (a != 0 && b != 0);

    return 0;
}