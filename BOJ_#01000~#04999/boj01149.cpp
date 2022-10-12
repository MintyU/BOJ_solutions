#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int R, G, B;
    int arr[1001][3];
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> R >> G >> B;

        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + R;
        arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + G;
        arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + B;
    }
    cout << min(arr[n][0], min(arr[n][1], arr[n][2]));

    return 0;
}