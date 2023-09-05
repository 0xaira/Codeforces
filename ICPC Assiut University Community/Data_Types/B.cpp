#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = false;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            flag = true;
            cout<<i<<'\n';
        }
    }
    if(!flag)
        cout<<-1<<'\n';
}