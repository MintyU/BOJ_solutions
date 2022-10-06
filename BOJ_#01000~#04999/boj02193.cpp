#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long dp[2][91];
    dp[0][1] = 1;
    dp[1][1] = 0;

    for (int i = 2; i <= n; i++)
    {
        dp[0][i] = dp[1][i - 1];
        dp[1][i] = dp[0][i - 1] + dp[1][i - 1];
    }
    cout << dp[0][n] + dp[1][n];
    return 0;
}
