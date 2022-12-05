#include <iostream>
using namespace std;

struct Node
{
    int left;
    int right;
};

void preorder(Node arr[], int cur)
{
    cout << char(cur + 'A');
    if (arr[cur].left != -1)
        preorder(arr, arr[cur].left);
    if (arr[cur].right != -1)
        preorder(arr, arr[cur].right);
}

void inorder(Node arr[], int cur)
{
    if (arr[cur].left != -1)
        inorder(arr, arr[cur].left);
    cout << char(cur + 'A');
    if (arr[cur].right != -1)
        inorder(arr, arr[cur].right);
}

void postorder(Node arr[], int cur)
{
    if (arr[cur].left != -1)
        postorder(arr, arr[cur].left);
    if (arr[cur].right != -1)
        postorder(arr, arr[cur].right);
    cout << char(cur + 'A');
}

int main()
{
    Node arr[26];
    int n;
    cin >> n;
    char a, l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> l >> r;
        arr[a - 'A'] = {(l != '.') ? l - 'A' : -1, (r != '.') ? r - 'A' : -1};
    }
    preorder(arr, 0);
    cout << '\n';
    inorder(arr, 0);
    cout << '\n';
    postorder(arr, 0);

    return 0;
}