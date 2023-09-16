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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int minElement = v[0];
    for(int i=0; i<n; i++){
        if(v[i] < minElement){
            minElement = v[i];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(v[i] == minElement){
            count++;
        }
    }
    if(count % 2 == 0){
        cout<<"Unlucky"<<endl;
    }else{
        cout<<"Lucky"<<endl;
    }
}