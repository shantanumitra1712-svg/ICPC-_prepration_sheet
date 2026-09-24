#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool isLucky = true;
    bool found = false;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }
            num /= 10;
            isLucky = true;
        }
        if (isLucky)
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// bool isLucky(int n)
// {
//     while (n > 0)
//     {
//         int digit = n % 10;

//         if (digit != 4 && digit != 7)
//         {
//             return false;
//         }
//         n /= 10;
//     }
//     return true;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     bool found = false;

//     for (int i = a; i <= b; i++)
//     {
//         if (isLucky(i))
//         {
//             cout << i << " ";
//             found = true;
//         }
//     }

//     if (!found)
//     {
//         cout << -1 << endl;
//     }

//     return 0;
// }
