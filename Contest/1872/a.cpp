#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    if(b>a){
        swap(a,b);
    }
    int ans=0;
    while(a>b){
        a-=c;
        b+=c;
        ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}