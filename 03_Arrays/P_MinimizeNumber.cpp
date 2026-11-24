#include <iostream>
using namespace std;

int main()
{
    int arr[1005];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cntop = 0;

    while (true)
    {
        bool isEven = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                isEven = false;
                break;
            }
        }

        if (!isEven)
            break;

        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
        }
        cntop++;
    }

    cout << cntop << "\n";
    return 0;
}