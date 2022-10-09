#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string ans;
    cin >> n;
    stack<int> s;
    int k = 1;
    int *arr = new int[n];
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (k > arr[i])
        {
            if (s.top() == arr[i])
            {
                ans += "-\n";
                s.pop();
            }
            else
            {
                flag = true;
                break;
            }
        }
        else if (k == arr[i])
        {
            // s.push(k);
            ans += "+\n";
            k++;
            ans += "-\n";
            // s.pop();
        }
        else
        {
            while (true)
            {
                s.push(k);
                ans += "+\n";
                k++;
                if (k == arr[i])
                {
                    ans += "+\n";
                    k++;
                    ans += "-\n";
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << "NO";
    }
    else
    {
        cout << ans;
    }
    delete[] arr;

    return 0;
}
