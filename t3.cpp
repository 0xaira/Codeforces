
#include <bits/stdc++.h>
using namespace std;
void validate(int res, int result){
    if(res==result){
        cout << "Yes" << endl;
    }
    else{
        cout << result << endl;
    }
}
int main(){
    int x;
    int y;
    int res;
    char op,opres;
    int result=0;
    cin >> x;
    cin >> op;
    cin >> y;
    cin >> opres;
    cin >> res;
    switch(op){
        case '+':
            result = x+y;
            validate(res,result);
            break;
        case '-':
            result = x-y;
            validate(res,result);
            break;
        case '*':
            result = x*y;
            validate(res,result);
            break;
    }
}
