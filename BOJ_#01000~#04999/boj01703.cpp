#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ans;
    int split, prune;

    while (true)
    {
        cin >> n;
        ans = 1;
        if (n == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> split >> prune;
            ans *= split;
            ans -= prune;
        }
        cout << ans << "\n";
    }

    return 0;
}