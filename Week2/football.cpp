#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

string solve(string &s){
            int  count =0;
            int n = s.length();
            for(int i=0;i<n;i++){
                if(s[i]==s[i+1]){
                    count++;
                    if(count==6){
                        return "YES";
                        break;
                    }
                }
                else{
                    count=0;
                }
            }
            return "NO";
}

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    string s;
    cin>>s;
    string ans=solve(s);
    cout<<ans<<endl;
   
}