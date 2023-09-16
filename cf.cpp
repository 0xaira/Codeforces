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
    
    int tc;
    cin>>tc;
    while(tc--){
        int num;
        cin>>num;
        if(num==2 || num==3){
            cout<<-1<<endl;
            continue;
        }
        vector<int> v(num);
        for(int i=0;i<num;i++){
            v[i]=i+1;
        }
        for(int i=0;i<num-2;i++){
            if(i%4<=1){
                swap(v[i],v[i+2]);
            }
        }
        if(num%4==2){
            swap(v[num-4],v[num-2]);
            swap(v[num-3],v[num-1]);
            swap(v[num-2],v[num-1]);
        }
        if(num%4==3){
            swap(v[num-5],v[num-2]);
            swap(v[num-5],v[num-4]);
            swap(v[num-5],v[num-1]);
        }
        if(num%4==1){
            swap(v[num-3],v[num-1]);
            swap(v[num-1],v[num-2]);
        }
        for(int i=0;i<num;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
}
}