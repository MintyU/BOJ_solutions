#include <iostream>
using namespace std;

int main() {
    long long a[1000] = {0, 1, };
    int count;
    cin >> count;
    for (int i = 2; i <= count; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    cout << a[count];
    return 0;
}