#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int tc;
    cin>>tc;
    int sum1;
    int sum2;
    while(tc--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            sum1++;
        }
        else{
            sum2++;
        }
    }
    if(sum1>sum2){
        cout<<"Mishka"<<endl;
    }
    else if(sum2>sum1){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}