#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    int x1, y1, x2, y2;
    int cnt = 0;
    cin >> m >> n;
    int arr[101][101] = {0};

    for (int i = 0; i < m; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1; j <= y2; j++)
        {
            for (int k = x1; k <= x2; k++)
            {
                arr[j][k]++;
            }
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (arr[i][j] > n)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}