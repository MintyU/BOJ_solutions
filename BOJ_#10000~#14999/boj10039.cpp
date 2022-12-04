#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (a < 40)
        {
            a = 40;
        }
        sum += a;
    }
    cout << sum / 5;

    return 0;
}