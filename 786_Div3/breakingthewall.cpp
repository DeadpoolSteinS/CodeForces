#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

int solve(int a[], int n, int minimum)
{
    // set values ​​separated by 1 element
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] < a[i + 2])
            minimum = min(minimum, a[i] + (a[i + 2] - a[i] + 1) / 2);
        else
            minimum = min(minimum, a[i + 2] + (a[i] - a[i + 2] + 1) / 2);
    }

    // set values ​​for neighboring elements
    for (int i = 0; i < n - 1; i++)
        minimum = min(minimum, max({(a[i] + 1) / 2, (a[i + 1] + 1) / 2, (a[i] + a[i + 1] + 2) / 3}));
    return minimum;
}

signed main()
{
    int n, min1 = INT_MAX, min2 = INT_MAX;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        // get first and second minimum value from array
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
            min2 = arr[i];
    }

    cout << solve(arr, n, (min1 + 1) / 2 + (min2 + 1) / 2) << endl;
    return 0;
}