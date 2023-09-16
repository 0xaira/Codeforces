#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;


void solve(){
      string s;
        cin>>s;
        int n=s.size();
        int count = 0;
        if(s.size()<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0];
            cout<<n-2;
            cout<<s[n-1]<<endl; 
        }    
}

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}