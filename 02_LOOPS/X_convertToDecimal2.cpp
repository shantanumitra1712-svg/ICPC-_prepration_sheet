#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int ones = 0;
        int num = N;

        while (num > 0)
        {
            if (num % 2 == 1)
            {
                ones++;
            }

            num /= 2;
        }

        int answer = 0;
        int place = 1;

        for (int i = 0; i < ones; i++)
        {
            answer += place;
            place *= 2;
        }

        cout << answer << endl;
    }

    return 0;
}