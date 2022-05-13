#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

string solve(int a, int b, int c, int x, int y)
{
    if (x > a)
        x -= a;
    else
        x = 0;
    if (y > b)
        y -= b;
    else
        y = 0;
    if (x + y > c)
        return "NO";
    else
        return "YES";
}

signed main()
{
    sync fast;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        cout << solve(a, b, c, x, y) << endl;
    }
    return 0;
}