#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

int n, m, q, sumIcon, sumDot;

int solve(vector<bool> &desktop, int x, int y)
{
    int pos = y * n + x;

    if (desktop[pos])
    {
        if (pos < sumIcon)
            sumDot--;
        sumIcon--;
        desktop[pos] = 0;
        if (desktop[sumIcon])
            sumDot--;
    }
    else
    {
        if (desktop[sumIcon])
            sumDot++;
        sumIcon++;
        desktop[pos] = 1;
        if (pos < sumIcon)
            sumDot++;
    }

    return sumIcon - sumDot;
}

signed main()
{
    sync fast;
    cin >> n >> m >> q;
    vector<bool> desktop(n * m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char cell;
            cin >> cell;
            if (cell == '*')
            {
                if (desktop[sumIcon])
                {
                    cout << i << '~' << j << endl;
                    sumDot++;
                }
                sumIcon++;
                int pos = j * n + i;
                desktop[pos] = 1;
                if (pos < sumIcon)
                {
                    cout << pos << '-' << sumIcon << endl;
                    cout << i << '-' << j << endl;
                    sumDot++;
                }
            }
        }
    }
    cout << sumDot << endl;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        // cout << solve(desktop, x - 1, y - 1) << endl;
    }
    return 0;
}