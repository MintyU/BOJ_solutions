#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[55][55];
    string temp;
    int counter = 0;
    int min = 5000;

    for (int i = 1; i <= m; i++)
    {
        cin >> temp;
        for (int j = 1; j <= n; j++)
        {
            if (temp[j - 1] == 'B')
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
        }
    }

    int start;
    int now;

    for (int p = 1; p <= m - 7; p++)
    {
        for (int q = 1; q <= n - 7; q++)
        {
            start = 0;
            counter = 0;
            for (int i = p; i <= p + 7; i++)
            {
                now = start;
                for (int j = q; j <= q + 7; j++)
                {
                    if (now != arr[i][j])
                    {
                        counter += 1;
                    }
                    now = (now == 0 ? 1 : 0);
                }
                start = (start == 0 ? 1 : 0);
            }
            min = (min < counter ? min : counter);

            start = 1;
            counter = 0;
            for (int i = p; i <= p + 7; i++)
            {
                now = start;
                for (int j = q; j <= q + 7; j++)
                {
                    if (now != arr[i][j])
                    {
                        counter += 1;
                    }
                    now = (now == 0 ? 1 : 0);
                }
                start = (start == 0 ? 1 : 0);
            }
            min = (min < counter ? min : counter);
        }
    }
    cout << min;

    return 0;
}
