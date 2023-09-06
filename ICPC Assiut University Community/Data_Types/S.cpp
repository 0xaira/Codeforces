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
int tc; cin>>tc;

    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int x = min(n, m);
        int y = max(n, m);
        int sum = 0;
        for (int i = x+1; i < y; i++)
        {
            if(i%2!=0){
            sum += i;
            }
        }
        cout << sum << endl;
    }  
}