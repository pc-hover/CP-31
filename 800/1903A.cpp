#include <bits/stdc++.h>
using namespace std;

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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        vector<int> sorted(n);
        for (int it = 0; it < n; it++)
        {
            int x;
            cin >> x;
            arr[it] = x;
            sorted[it] = x;
        }
        sort(sorted.begin(), sorted.end());
        if (k == 1 && sorted != arr)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
