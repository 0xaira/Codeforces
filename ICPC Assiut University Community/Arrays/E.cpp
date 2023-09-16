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
    int min=a[0];
    int pos=0;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
            pos=i;
        }
    }
    cout<<min<<" "<<pos+1;

}