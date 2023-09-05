// Factorial of a number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    long long int n;
    cin>>n;
    long long int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<'\n';
}
}