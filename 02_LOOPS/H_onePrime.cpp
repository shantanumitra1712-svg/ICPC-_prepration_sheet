// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     if (num < 2)
//     {
//         cout << "NO" << endl;
//         return 0;
//     }

//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }

//     cout << "YES" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num < 2)
    {
        cout << "NO" << endl;
        // return 0;
    }

    else
    {
        bool isPrime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}