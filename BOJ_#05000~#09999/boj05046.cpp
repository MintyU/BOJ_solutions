#include <iostream>
using namespace std;

int main()
{
    int n, b, h, w;
    cin >> n >> b >> h >> w;
    int p, a;
    int min = 2100000000;

    for (int i = 0; i < h; i++)
    {
        cin >> p;
        for (int i = 0; i < w; i++)
        {
            cin >> a;
            if (a >= n && p * n <= b)
            {
                if (min > p * n)
                {
                    min = p * n;
                }
            }
        }
    }
    if (min == 2100000000)
    {
        cout << "stay home";
    }
    else
    {
        cout << min;
    }

    return 0;
}