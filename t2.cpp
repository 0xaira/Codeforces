
#include <bits/stdc++.h>
using namespace std;
int main(){
    double N;
    cin >> N;
    if(N==floor(N)){
        cout << "int " << N << endl;
    }
    else{
        cout << "float " << floor(N) << " " << N-floor(N) << endl;
    }
}
