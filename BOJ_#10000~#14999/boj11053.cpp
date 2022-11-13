#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[1001][2];
    int globalMax = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        int max = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j][0] < arr[i][0] && arr[j][1] > max)
            {
                max = arr[j][1];
            }
        }
        arr[i][1] = max + 1;
        if (globalMax < arr[i][1])
        {
            globalMax = arr[i][1];
        }
    }
    cout << globalMax;

    return 0;
}