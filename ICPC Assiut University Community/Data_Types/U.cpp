#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int N;
    int A;
    int B;
    cin>>N>>A>>B;
    
    int total=0;
     for(int i=0;i<=N;i++){
        int sum=0;
        int temp=i;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum>=A && sum<=B){
            total+=i;
        }
     }
        cout<<total<<endl;
}