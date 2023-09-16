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
    
    string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n = s1.size()-1;
        if(s1[n]==s2[n]){
            cout<<0;
        }else if(s1[n]>s2[n]){
            cout<<1;
        }
        else{
            cout<<-1;
        }
}