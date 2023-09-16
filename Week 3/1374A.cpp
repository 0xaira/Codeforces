#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;


void solve(){
    int x, y, n;
    cin >> x >> y >> n;

    int k = ((n - y) / x) * x + y;
    cout << k << endl;
}

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}