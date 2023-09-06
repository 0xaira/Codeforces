#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;
/*Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.The Lucky number is any positive number that its decimal representation contains only 4 and 7. return -1 if no lucky number present */

signed main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    
    int a,b;
    cin>>a>>b;
    
    bool flag = false;
    for(int i=a;i<=b;i++){
        int temp = i;
        bool isLucky = true;
        while(temp){
            int digit = temp%10;
            if(digit!=4 && digit!=7){
                isLucky = false;
                break;
            }
            temp/=10;
        }
        if(isLucky){
            flag = true;
            cout<<i<<endl;
        }
    }

}