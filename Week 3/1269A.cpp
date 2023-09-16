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
    int ans=0;
    int a,b;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if((i-j)==n){
            a=i;
            b=j;
        }
      }
    }
    cout<<a<<" "<<b<<endl;
}