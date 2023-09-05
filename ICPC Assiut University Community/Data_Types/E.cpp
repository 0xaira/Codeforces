#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maximum=0;
    while(n--){
        
            int num;
            cin>>num;
            if(num>= maximum)
                maximum = num;
    }
    cout<<maximum<<'\n';
}