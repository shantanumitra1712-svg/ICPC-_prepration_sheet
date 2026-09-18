#include <iostream>
using namespace std;

int main()
{
    long long seat;
    cin >> seat;

    long long row = seat / 4;
    long long column = seat % 4;

    if (row % 2 == 1)
    {
        column = 3 - column;
    }

    cout << row << " " << column;

    return 0;
}