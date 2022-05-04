#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define bend(a) a.begin(), a.end()
#define pb push_back
#define mp make_pair
using namespace std;

string solve(int a[], int n)
{
    if (n <= 2)
        return "YES";

    // odd or even identity
    int odd = 0;

    // if odd, check first element
    if (n & 1)
    {
        if (a[0] > a[1] || a[0] > a[2])
            return "NO";
        odd = 1;
    }

    // check every 2 element less than 2 next element
    for (int i = odd; i < n - 2; i += 2)
        if (max(a[i], a[i + 1]) > min(a[i + 2], a[i + 3]))
            return "NO";

    return "YES";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(arr, n) << endl;
    }
    return 0;
}