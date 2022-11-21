#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[101] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (true)
    {
        for (int i = 1; i <= n; i++)
        {
            if (x > a[i])
            {
                cout << i;
                return 0;
            }
            x++;
        }
    }

    return 0;
}