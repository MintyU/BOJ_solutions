#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[1025][1025] = {0};
    int n, m;
    cin >> n >> m;
    int k;
    int x1, x2, y1, y2;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> k;
            arr[i][j] = k + arr[i][j - 1];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        sum = 0;
        for (int row = x1; row <= x2; row++)
        {
            sum += arr[row][y2] - arr[row][y1 - 1];
        }
        cout << sum << "\n";
    }

    return 0;
}