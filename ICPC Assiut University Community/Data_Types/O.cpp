#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
             cout<<'*';
        }
       cout<<endl;
    }
}