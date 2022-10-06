#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string name[1000];
    string subname[1000];
    string temp;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    int len = name[0].length();

    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = name[j].substr(len - i);
            for (int k = 0; k < j; k++)
            {
                if (subname[k] == temp)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                flag = false;
                break;
            }
            else
            {
                subname[j] = temp;
            }
            if (j == n - 1)
            {
                cout << i;
                return 0;
            }
        }
    }
}