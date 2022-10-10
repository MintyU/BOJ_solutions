#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[8001] = {0};
    int n, a;
    cin >> n;
    int max = -5000;
    int min = 5000;
    int sum = 0;
    int mid_idx = (n + 1) / 2;
    int mid = 5555;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a + 4000]++;
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        sum += a;
    }

    int cnt = 0;
    int a1 = -1;
    int a2 = -1;
    int k = -1;
    for (int i = 8000; i >= 0; i--)
    {
        cnt += arr[i];
        if (cnt >= mid_idx && mid == 5555)
        {
            mid = i - 4000;
        }
        if (arr[i] > k)
        {
            a1 = i;
            k = arr[i];
            a2 = -1;
        }
        else if (arr[i] == k)
        {
            a2 = a1;
            a1 = i;
        }
    }

    cout << int(round(sum / float(n))) << "\n";
    cout << mid << "\n";
    if (a2 == -1)
    {
        cout << a1 - 4000 << "\n";
    }
    else
    {
        cout << a2 - 4000 << "\n";
    }
    cout << max - min << "\n";

    return 0;
}