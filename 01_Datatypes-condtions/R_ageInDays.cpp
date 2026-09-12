#include <iostream>
using namespace std;

int main()
{
    long long age;
    cin >> age;

    // calculate years
    long long years = age / 365;
    age = age % 365;

    // calculate month
    long long months = age / 30;

    // calculate days
    long long days = age % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}