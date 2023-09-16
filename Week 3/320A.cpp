
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
    bool flag = true;
    while(n){
        if(n%10 == 1){
            n/=10;
        }
        else if(n%100 == 14){
            n/=100;
        }
        else if(n%1000 == 144){
            n/=1000;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}