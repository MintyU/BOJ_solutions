#include <iostream>
using namespace std;

int main()
{
    int n, a;
    int cnt = 0;
    cin >> n;
    int arr[1001] = {0};
    arr[1] = -1;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = i + 1; j <= 1000; j++)
        {
            if (j % i == 0)
            {
                arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (arr[a] == 0)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}