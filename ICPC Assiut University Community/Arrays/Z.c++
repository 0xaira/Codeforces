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
    int tc;
    cin>>tc;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    sort(v.begin(), v.end());
    while(tc--){
        int x;
        cin>>x;
        int l=0, r=n-1;
        bool flag=false;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(v[mid]==x){
                flag=true;
                break;
            }
            else if(v[mid]>x){
            r=mid-1;
            }
            else{
            l=mid+1;
            }
        }
        if(flag){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }

}