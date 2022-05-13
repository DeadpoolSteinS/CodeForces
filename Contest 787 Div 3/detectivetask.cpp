#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

int solve(string a)
{
    if (a.length() == 1)
        return 1;
    int total = 0, tanya = 0;
    bool ada = false;
    char now = '1';
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '?')
        {
            if (a[i] == '0' && now == '1')
            {
                total++;
                if (ada)
                    total++;
                now = a[i];
                ada = true;
                break;
            }
            else if (a[i] == '1')
            {
                tanya = 0;
            }
            now = a[i];
            ada = true;
        }
        else
        {
            tanya++;
        }
    }

    if (now == '1' && ada)
        total++;
    return total + tanya;
}
// ??0 = 3
// ??1 = 1
// ??00 = 3
// ??10 = 2
// ??? = 3
// 1?0 = 3
// ??1?? = 3
// ???0?? = 4

signed main()
{
    sync fast;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}