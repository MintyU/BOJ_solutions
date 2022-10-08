#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int ans1 = 1, ans2 = 0;
    int temp = 1;
    cin >> m >> n;

    while (true)
    {
        if (m % temp == 0 && n % temp == 0)
        {
            ans1 = temp;
        }
        if (temp > m || temp > n)
        {
            break;
        }
        temp++;
    }

    temp = (m > n ? m : n);
    while (true)
    {
        if (temp % m == 0 && temp % n == 0)
        {
            ans2 = temp;
            break;
        }
        temp++;
    }
    cout << ans1 << "\n"
         << ans2;
    return 0;
}