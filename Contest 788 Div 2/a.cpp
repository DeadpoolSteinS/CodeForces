#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

string solve(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] < 0 && i < j)
            i++;
        while (arr[j] > 0 && i < j)
            j--;
        if (i < j)
        {
            arr[i] *= -1;
            arr[j] *= -1;
            i++;
            j--;
        }
    }
    if (is_sorted(arr, arr + n))
        return "YES";
    else
        return "NO";
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n) << endl;
    }
    return 0;
}