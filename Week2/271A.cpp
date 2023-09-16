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
    for(int i=n+1; i<=9999;i++){
        int a = i/1000;
        int b = (i/100)%10;
        int c = (i/10)%10;
        int d = i%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<i;
            break;
        }
    }
}