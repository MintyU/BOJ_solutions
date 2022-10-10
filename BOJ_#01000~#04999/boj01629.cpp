#include <iostream>
using namespace std;

int pow(int a, int b, int c);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << pow(a, b, c);
    return 0;
}
int pow(int a, int b, int c)
{
    long long ans;
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a % c;
    }
    ans = pow(a, b / 2, c) % c;
    if (b % 2 == 0)
    {
        return ans * ans % c;
    }
    return ans * ans % c * a % c;
}