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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> v(n);
    for(int i=0; i<n; i++){
        if(a[i]<0){
            v[i]=2;
        }
        else if(a[i]>0){
            v[i]=1;
        }
        else{
            v[i]=0;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}