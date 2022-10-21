#include <iostream>
using namespace std;

int arr[2][100001];
int dp[2][100001];
int t, n;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int in;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < 2; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                cin >> arr[j][k];
            }
        }
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];

        for (int j = 2; j <= n; j++)
        {
            dp[0][j] = (dp[1][j - 1] > dp[1][j - 2] ? dp[1][j - 1] + arr[0][j] : dp[1][j - 2] + arr[0][j]);
            dp[1][j] = (dp[0][j - 1] > dp[0][j - 2] ? dp[0][j - 1] + arr[1][j] : dp[0][j - 2] + arr[1][j]);
        }
        cout << (dp[0][n] > dp[1][n] ? dp[0][n] : dp[1][n]) << "\n";
    }

    return 0;
}