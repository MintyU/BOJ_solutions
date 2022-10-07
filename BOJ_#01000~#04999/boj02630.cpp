#include <iostream>
using namespace std;

int paper[128][128] = {0};

struct p
{
    int white, blue;
};

p cut(int a, int b, int c, int d);

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> paper[i][j];
        }
    }
    p ans = cut(0, n, 0, n);
    cout << ans.white << "\n"
         << ans.blue;

    return 0;
}

p cut(int a, int b, int c, int d)
{
    int tempcolor = paper[a][c];
    bool flag = true;
    p ans = {0, 0};
    for (int i = a; i < b; i++)
    {
        for (int j = c; j < d; j++)
        {
            if (paper[i][j] != tempcolor)
            {
                flag = false;
            }
        }
    }
    if (!flag)
    {
        p temp1 = cut(a, (a + b) / 2, c, (c + d) / 2);
        p temp2 = cut(a, (a + b) / 2, (c + d) / 2, d);
        p temp3 = cut((a + b) / 2, b, c, (c + d) / 2);
        p temp4 = cut((a + b) / 2, b, (c + d) / 2, d);

        ans.white = temp1.white + temp2.white + temp3.white + temp4.white;
        ans.blue = temp1.blue + temp2.blue + temp3.blue + temp4.blue;
    }
    if (flag)
    {
        if (tempcolor == 0)
        {
            return {1, 0};
        }
        else
        {
            return {0, 1};
        }
    }

    return ans;
}