// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int second_largest = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             second_largest = largest;
//             largest = arr[i];
//         }

//         else if (arr[i] < largest && arr[i] > second_largest)
//         {
//             second_largest = arr[i];
//         }
//     }

//     cout << second_largest;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int smallest = a[0];
    int ssmallest = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }

    cout << ssmallest;

    return 0;
}

// files modified