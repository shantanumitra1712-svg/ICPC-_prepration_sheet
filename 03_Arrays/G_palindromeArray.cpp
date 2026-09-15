#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[100005];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long start = 0;
    long long end = n - 1;

    bool isPalindrome = true;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (!isPalindrome)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}