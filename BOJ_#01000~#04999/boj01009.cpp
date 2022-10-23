#include <iostream>

using namespace std;

int main()
{
    int ans;
    int a, b;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ans = 1;
        cin >> a >> b;
        for (int j = 0; j < b; j++)
        {
            ans = (ans % 10) * (a % 10);
            ans %= 10;
        }
        if (ans == 0)
        {
            cout << 10 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }

    return 0;
}