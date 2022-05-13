#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

signed main()
{
    sync fast;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, minim = INT_MAX;
        cin >> a >> b >> c >> d;
        if (b >= c && a <= c)
            minim = c;
        else if (d >= a && c <= a)
            minim = a;
        cout << min(a + c, minim) << endl;
    }
    return 0;
}

// 1 2 3 4
// 1 3 2 4
// 2 3 1 4
// 3 4 1 2