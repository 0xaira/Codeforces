#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int N;
    cin>>N;
        for(int j=1;j<=N*4;j++){
            if(j%4!=0)
               cout<<j<<" ";
            if(j%4==0){
                cout<<"PUM"<<endl;
            }
        }
}