#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (binary_search(v.begin(), v.end(), a))
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}