#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    int n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            s.pop();
        }
        else
        {
            s.push(a);
        }
    }
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;
    return 0;
}