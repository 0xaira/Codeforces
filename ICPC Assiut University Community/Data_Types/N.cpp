#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;
// +
   // 3
   // 5 2 3
   // output
   // +++++
   // ++
   // +++
signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    char s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        int t;
        cin>>t;
        while(t--){
            cout<<s;
        }
        cout<<endl;
    }
}