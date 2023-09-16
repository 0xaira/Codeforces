#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;


void solve(){

}

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin>>n;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int maximum=v[0];
    for(int i=0;i<n;i++){
        maximum=max(maximum,v[i]);
        sum+=v[i];
    }
    int ans=maximum*n;
    cout<<ans-sum<<endl;
}