#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int n,k;
    cin>>n>>k;
    int odd = (n+1)/2;
    int even = n/2;
    if(k<=odd){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<2*(k-odd)<<endl;
    }
}