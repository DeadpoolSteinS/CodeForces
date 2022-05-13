#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

void permutasi(int a[], int b[], int c[], bool d[], int i)
{
    if (!d[c[i]])
    {
        d[c[i]] = true;
    }
}

// 1 2 3
// 2 3 1

int solve(int a[], int b[], int d[], int n)
{
    bool sudah[n + 1] = {}, lewat[n + 1] = {};
    int notSure = n;
    for (int i = 0; i < n; i++)
    {
        if (d[i] != 0)
        {
            sudah[d[i]] = true;
            notSure--;
            lewat[i] = true;
        }
        else if (a[i] == b[i])
            sudah[a[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 0)
        {
            if (sudah[a[i]])
            {
                sudah[b[i]] = true;
                lewat[i] = true;
            }
            else if (sudah[b[i]])
            {
                sudah[a[i]] = true;
                lewat[i] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!lewat[i])
        {
            permutasi(arr]);
        }
    }
}

signed main()
{
    sync fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], d[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        cout << solve(a, b, d, n) << endl;
    }
    return 0;
}