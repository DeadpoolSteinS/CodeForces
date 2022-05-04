#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % x)
        cout << "0 0" << endl;
    else
        cout << "1 " << y / x << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}