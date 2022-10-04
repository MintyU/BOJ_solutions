#include <iostream>
using namespace std;

int main()
{
    int n, m, b;
    cin >> n >> m >> b;
    int field[501][501];
    int min = 300;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> field[i][j];
            min = (min < field[i][j] ? min : field[i][j]);
            max = (max > field[i][j] ? max : field[i][j]);
        }
    }

    int sum_of_second;
    int min_second = 2147483647;
    int sub;
    int used_blocks;
    int ans_k;
    for (int k = max; k >= min; k--)
    {
        sum_of_second = 0;
        used_blocks = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sub = field[i][j] - k;
                if (sub >= 0)
                {
                    sum_of_second += (2 * sub);
                    used_blocks -= sub;
                }
                else
                {
                    sum_of_second -= sub;
                    used_blocks -= sub;
                }
            }
        }
        if (b - used_blocks >= 0)
        {
            if (min_second > sum_of_second)
            {
                min_second = sum_of_second;
                ans_k = k;
            }
        }
    }
    cout << min_second << " " << ans_k;
    return 0;
}