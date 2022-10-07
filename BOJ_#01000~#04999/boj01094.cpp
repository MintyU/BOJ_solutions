#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    int arr[10] = {};
    for (int i = 0; n != 0; i++)
    {
        arr[i] = n % 2;
        n /= 2;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 1)
        {
            cnt += 1;
        }
    }
    cout << cnt;

    return 0;
}