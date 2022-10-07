#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long dp[1001];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    cout << dp[n] % 10007;
    return 0;
}
// 1
// 11 2
// 111 21 12
// 1111 211 121 112 22
//