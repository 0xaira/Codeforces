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
    
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] != s[n-i-1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}