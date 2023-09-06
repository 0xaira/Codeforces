#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        int n, m;
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            break;

        int x = min(n, m);
        int y = max(n, m);
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
}