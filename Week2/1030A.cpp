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
    int arr[n];
    int count =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
        }
    }
    if(count>=1){
        cout<<"Hard";
    }
    else{
        cout<<"Easy";
    }
}