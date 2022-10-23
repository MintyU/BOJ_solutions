#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a;
    cin >> n;
    int ans = 0;

    int arr[501][501] = {0};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a;
            arr[i][j] = arr[i - 1][j - 1] > arr[i - 1][j] ? arr[i - 1][j - 1] + a : arr[i - 1][j] + a;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        ans = arr[n][i] > ans ? arr[n][i] : ans;
    }
    cout << ans;

    return 0;
}