#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

int solve(char arr[], int n, string s, int k)
{
    bool special[26] = {};
    for (int i = 0; i < k; i++)
    {
        special[arr[i] - 'a'] = true;
    }
    int total = -1;
    bool ada;
    do
    {
        ada = false;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (special[s[i + 1] - 'a'])
            {
                s.erase(s.begin() + i);
                i--;
                ada = true;
            }
        }
        total++;
    } while (ada);
    return total;
}

signed main()
{
    sync fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> s >> k;
        char arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n, s, k) << endl;
    }
    return 0;
}