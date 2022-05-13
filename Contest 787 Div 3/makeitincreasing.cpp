#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

int solve(int arr[], int n)
{
    int total = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1])
        {
            if (arr[i] == 0)
                return -1;
            arr[i] /= 2;
            total++;
        }
    }
    return total;
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