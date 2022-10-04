#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int dp[100001];

    dp[0] = 1;
    dp[1] = 3;

    for (int i = 2; i < N + 1; i++)
    {
        dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
    }
    cout << (dp[N] % 9901);
    return 0;
}