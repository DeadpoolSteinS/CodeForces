#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

int solve()
{
    string s;
    cin >> s;
    int result = (s[0] - 'a') * 25 + (s[1] - 'a');
    if (s[1] < s[0])
        result++;
    return result;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
    return 0;
}