#include <iostream>
#include <algorithm>
using namespace std;

struct pos
{
    int x, y;
};
bool comp(pos a, pos b);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x, y;
    cin >> n;
    pos *arr = new pos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = {x, y};
    }
    sort(arr, arr + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }

    return 0;
}

bool comp(pos a, pos b)
{
    if (a.x == b.x)
    {
        return a.y < b.y;
    }
    else
    {
        return a.x < b.x;
    }
}