#include <bits/stdc++.h>
using namespace std;

int solve()
{

    int n,
        x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    sort(arr.begin(), arr.end());
    int maxi = max(arr[0], (x - arr[n - 1]) * 2);
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i] - arr[i - 1]);
    }
    return maxi;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve();
        cout << endl;
    }
    return 0;
}