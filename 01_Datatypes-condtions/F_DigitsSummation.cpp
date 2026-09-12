#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long last_a = a % 10;
    long long last_b = b % 10;
    cout << last_a + last_b;
    return 0;
}