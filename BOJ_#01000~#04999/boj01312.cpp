#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    int k = 0;
    cin >> a >> b >> n;
    a %= b;
    for (int i = 0; i < n; i++)
    {
        k = (a * 10) / b;
        a = (a * 10) % b;
    }
    cout << k;

    return 0;
}