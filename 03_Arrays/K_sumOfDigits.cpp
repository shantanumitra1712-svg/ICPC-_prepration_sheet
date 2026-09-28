#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string num;
    cin >> num;

    int digitSum = 0;
    for (int i = 0; i < n; i++)
    {
        digitSum += num[i] - '0';
    }

    // fuck my github it sucks
    cout << digitSum;
    return 0;
}