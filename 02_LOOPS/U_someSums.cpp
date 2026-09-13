#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int digitSum = 0;
        while (num > 0)
        {
            digitSum += num % 10;
            num /= 10;
        }

        if (a <= digitSum && b >= digitSum)
        {
            // cout << i << endl;
            answer += i;
        }
    }

    cout << answer << endl;
    return 0;
}