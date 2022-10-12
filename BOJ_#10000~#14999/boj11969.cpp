#include <iostream>
using namespace std;

struct breed
{
    int H, G, J;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    breed *arr = new breed[n];
    int a, b;
    breed ps = {0, 0, 0};
    int in;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (in == 1)
        {
            ps.H++;
        }
        else if (in == 2)
        {
            ps.G++;
        }
        else
        {
            ps.J++;
        }
        arr[i] = ps;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        breed ba, bb;
        if (a == 1)
        {
            ba = {0, 0, 0};
            bb = arr[b - 1];
        }
        else
        {
            ba = arr[a - 2];
            bb = arr[b - 1];
        }
        cout << bb.H - ba.H << " " << bb.G - ba.G << " " << bb.J - ba.J << "\n";
    }

    delete[] arr;
    return 0;
}