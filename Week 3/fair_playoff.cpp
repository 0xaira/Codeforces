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
    while(tc--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int a = max(s1,s2);
        int b = max(s3,s4);
        int c = min(s1,s2);
        int d = min(s3,s4);
        if(a<d || b<c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}