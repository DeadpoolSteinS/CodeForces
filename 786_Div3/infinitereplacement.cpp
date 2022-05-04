#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

int solve(string a, string b)
{
    // always same when replace
    if (b == "a")
        return 1;

    // not contain 'a'
    if (b.find('a') >= b.length())
    {
        int aContain = count(a.begin(), a.end(), 'a');
        return 1LL << aContain;
    }
    // infinite replacement
    else
        return -1;
}

signed main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        cout << solve(s, t) << endl;
    }
    return 0;
}