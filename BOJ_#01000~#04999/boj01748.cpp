#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long ans = 0;
    cin >> n;
    int temp = n;
    int digit = 1;
    while (temp / 10 != 0)
    {
        temp /= 10;
        ans += (pow(10, digit) - pow(10, digit - 1)) * digit;
        digit++;
    }
    if (digit != 1)
    {
        ans += (n % int(pow(10, digit - 1)) + 1) * digit + (n / int(pow(10, digit - 1)) - 1) * pow(10, digit - 1) * digit;
    }
    else
    {
        ans += n;
    }

    cout << ans;
    return 0;
}