#include <iostream>
using namespace std;

int arr[3000][3000] = {0};

struct stat
{
    int type_a;
    int type_b;
    int type_c;
};

stat paper(int col_start, int col_end, int row_start, int row_end);
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    stat ans = paper(0, n, 0, n);
    cout << ans.type_a << "\n"
         << ans.type_b << "\n"
         << ans.type_c;

    return 0;
}

stat paper(int col_start, int col_end, int row_start, int row_end)
{
    stat ans;
    int color = arr[col_start][row_start];
    bool flag = true;
    for (int i = col_start; i < col_end; i++)
    {
        for (int j = row_start; j < row_end; j++)
        {
            if (arr[i][j] != color)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    if (flag)
    {
        if (color == -1)
        {
            ans = {1, 0, 0};
        }
        else if (color == 0)
        {
            ans = {0, 1, 0};
        }
        else
        {
            ans = {0, 0, 1};
        }
        return ans;
    }
    else
    {
        stat stat0 = paper(col_start, col_start + (col_end - col_start) / 3, row_start, row_start + (row_end - row_start) / 3);
        stat stat1 = paper(col_start, col_start + (col_end - col_start) / 3, row_start + (row_end - row_start) / 3, row_start + (row_end - row_start) * 2 / 3);
        stat stat2 = paper(col_start, col_start + (col_end - col_start) / 3, row_start + (row_end - row_start) * 2 / 3, row_end);
        stat stat3 = paper(col_start + (col_end - col_start) / 3, col_start + (col_end - col_start) * 2 / 3, row_start, row_start + (row_end - row_start) / 3);
        stat stat4 = paper(col_start + (col_end - col_start) / 3, col_start + (col_end - col_start) * 2 / 3, row_start + (row_end - row_start) / 3, row_start + (row_end - row_start) * 2 / 3);
        stat stat5 = paper(col_start + (col_end - col_start) / 3, col_start + (col_end - col_start) * 2 / 3, row_start + (row_end - row_start) * 2 / 3, row_end);
        stat stat6 = paper(col_start + (col_end - col_start) * 2 / 3, col_end, row_start, row_start + (row_end - row_start) / 3);
        stat stat7 = paper(col_start + (col_end - col_start) * 2 / 3, col_end, row_start + (row_end - row_start) / 3, row_start + (row_end - row_start) * 2 / 3);
        stat stat8 = paper(col_start + (col_end - col_start) * 2 / 3, col_end, row_start + (row_end - row_start) * 2 / 3, row_end);

        ans.type_a = stat0.type_a + stat1.type_a + stat2.type_a + stat3.type_a + stat4.type_a + stat5.type_a + stat6.type_a + stat7.type_a + stat8.type_a;
        ans.type_b = stat0.type_b + stat1.type_b + stat2.type_b + stat3.type_b + stat4.type_b + stat5.type_b + stat6.type_b + stat7.type_b + stat8.type_b;
        ans.type_c = stat0.type_c + stat1.type_c + stat2.type_c + stat3.type_c + stat4.type_c + stat5.type_c + stat6.type_c + stat7.type_c + stat8.type_c;

        return ans;
    }
}