#include <iostream>
#include <vector>
using namespace std;
struct human
{
    int w, h;
};

int main()
{
    vector<human> v;
    int n, w, h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        v.push_back({w, h});
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i].h < v[j].h && v[i].w < v[j].w)
            {
                cnt++;
            }
        }
        cout << cnt + 1 << " ";
    }

    return 0;
}