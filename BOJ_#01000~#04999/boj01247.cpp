#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long num;
    int a;
    long long result;
    int overflow = 0;

    for (int i = 0; i < 3; i++)
    {
        overflow = 0;
        result = 0;
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> num;
            if (num > 0 && result > 0 && result > LLONG_MAX - num)
            {
                overflow++;
            }
            else if (num < 0 && result < 0 && result < LLONG_MIN - num)
            {
                overflow--;
            }

            result += num;
        }

        if (overflow > 0)
        {
            cout << "+\n";
        }
        else if (overflow < 0)
        {
            cout << "-\n";
        }
        else if (overflow == 0)
        {
            if (result > 0)
            {
                cout << "+\n";
            }
            else if (result < 0)
            {
                cout << "-\n";
            }
            else if (result == 0)
            {
                cout << "0\n";
            }
        }
    }

    return 0;
}