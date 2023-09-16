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
    if((n & (n-1)) == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}