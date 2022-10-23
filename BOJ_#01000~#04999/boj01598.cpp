#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    if ((m - 1) % 4 > (n - 1) % 4)
    {
        cout << ((m - 1) % 4) - ((n - 1) % 4) + abs((((m - 1) % 4) - ((n - 1) % 4) + n) - m) / 4;
    }
    else if ((m - 1) % 4 < (n - 1) % 4)
    {
        cout << ((n - 1) % 4) - ((m - 1) % 4) + abs((((n - 1) % 4) - ((m - 1) % 4) + m) - n) / 4;
    }
    else
    {
        cout << abs(m - n) / 4;
    }
    return 0;
}