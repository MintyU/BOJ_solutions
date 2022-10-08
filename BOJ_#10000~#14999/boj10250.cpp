#include <iostream>
using namespace std;

int main()
{
    int n, h, w, q;
    int ans;
    int index = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        index = 1;
        cin >> h >> w >> q;
        for (int j = 1; j <= w && index <= q; j++)
        {
            for (int k = 1; k <= h && index <= q; k++)
            {
                ans = k * 100 + j;
                index++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}