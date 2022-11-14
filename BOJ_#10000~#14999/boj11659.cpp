#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    long long arr[100001] = {0};
    int a;
    int from, to;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        arr[i] = a + arr[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> from >> to;
        cout << arr[to] - arr[from - 1] << "\n";
    }
    return 0;
}