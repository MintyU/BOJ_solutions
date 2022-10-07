#include <iostream>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int *array = new int[20000005];
    for (int i = 0; i < 20000005; i++)
    {
        array[i] = 0;
    }

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        array[a + 10000000]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << array[a + 10000000] << " ";
    }
    delete[] array;
    return 0;
}