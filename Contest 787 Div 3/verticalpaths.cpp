#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define sync ios::sync_with_stdio(0);
#define fast cin.tie(0)
#define pii pair<int, int>
using namespace std;

void solve(int p[], int n)
{
    if (n == 1)
    {
        cout << 1 << endl
             << 1 << endl
             << 1 << endl;
        return;
    }
    vector<vector<int>> arr;
    for (int i = 1; i <= n; i++)
    {
        if (i == p[i - 1])
            continue;
        bool masuk = false;
        for (int j = 0; j < arr.size(); j++)
        {
            if (p[i - 1] == arr[j][arr[j].size() - 1])
            {
                arr[j].push_back(i);
                masuk = true;
                break;
            }
            else if (i == arr[j][0])
            {
                arr[j].insert(arr[j].begin(), p[i - 1]);
                masuk = true;
                break;
            }
        }
        if (!masuk)
        {
            vector<int> test = {p[i - 1], i};
            arr.push_back(test);
        }
        // for (int j = 0; j < arr.size(); j++)
        // {
        //     for (int k = 0; k < arr[j].size(); k++)
        //     {
        //         cout << '#' << arr[j][k];
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        int tambah = 0;
        if (i == 0)
            tambah++;
        cout << arr[i].size() - 1 + tambah << endl;
        if (i == 0)
            cout << arr[i][0] << ' ';
        for (int j = 1; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
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
        solve(arr, n);
        if (t)
            cout << endl;
    }
    return 0;
}