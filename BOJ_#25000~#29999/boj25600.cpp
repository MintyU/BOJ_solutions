#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    int a, d, g;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> d >> g;
        if (a == d + g)
        {
            arr[i] = a * (d + g) * 2;
        }
        else
        {
            arr[i] = a * (d + g);
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}