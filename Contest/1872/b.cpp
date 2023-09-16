#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    int a;
    int b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    int ans= INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i].second %2==0){
            int result= (v[i].second-2)/2;
            ans=min(ans,result+v[i].first);

        }
        else{
            int result1= (v[i].second)/2;
            ans=min(ans,result1+v[i].first);
        }
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