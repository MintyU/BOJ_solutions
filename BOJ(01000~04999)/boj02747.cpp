#include <iostream>
using namespace std;

int fib(int a) {
    switch (a)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    
    default:
        return fib(a-1) + fib(a-2);
        break;
    }

}

int main() {
    int a;
    cin >> a;
    cout << fib(a);
    return 0;
}