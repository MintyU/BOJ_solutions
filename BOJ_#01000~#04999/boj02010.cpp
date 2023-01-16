#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, in;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        ans += in - 1;
    }
    cout << ans + 1;

    return 0;
}