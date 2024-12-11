#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;

int main()
{

    int n;
    cin >> n;
    int a[n];
    bool b[N];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        b[i] = false;
    }
    for (j = 0; j < n; j++)
    {
        if (a[j] >= 0 && j < n)
        {
            b[a[j]] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == false)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}