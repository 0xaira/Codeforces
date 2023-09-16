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
    
    int n,m;
    cin>>n>>m;
    int ans = 0;
    for(int a=0;a<=1000;a++){
        for(int b=0;b<=1000;b++){
            if(a*a + b == n && a + b*b == m){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}