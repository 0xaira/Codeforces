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
    
    //check if the array is palindrome or not
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bool flag=true;
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}