#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    cin>>a>>b;
    long long int gcd=1;
    for(long long int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<"\n";
}