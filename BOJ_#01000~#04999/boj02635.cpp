#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[30001] = {0};
    int max = 0;

    cin >> n;
    arr[0] = n;

    for (int i = 1; i <= n; i++)
    {
        int iter = 0;
        int a;
        int temp[30000] = {0};
        temp[0] = n;
        temp[1] = i;

        while (true)
        {
            a = temp[iter] - temp[iter + 1];
            if (a < 0)
            {
                break;
            }
            else
            {
                temp[iter + 2] = a;
                iter++;
            }
        }
        if (iter > max)
        {
            max = iter;
            for (int j = 0; j < iter + 2; j++)
            {
                arr[j] = temp[j];
            }
        }
    }
    cout << max + 2 << "\n";
    for (int i = 0; i < max + 2; i++)
    {
        cout << arr[i];
        if (i != max + 1)
        {
            cout << " ";
        }
    }

    return 0;
}