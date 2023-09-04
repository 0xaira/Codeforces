#include <bits/stdc++.h>
using namespace std;
int main(){
    double x;
    cin >> x;
    if(x>=0 && x<=25.00){
        cout << "Interval [0,25]" << endl;
    }
    else if(x>25 && x<=50.00){
        cout << "Interval (25,50]" << endl;
    }
    else if(x>50 && x<=75.00){
        cout << "Interval (50,75]" << endl;
    }
    else if(x>75 && x<=100.00){
        cout << "Interval (75,100]" << endl;
    }
    else{
        cout << "Out of Intervals" << endl;
    }
}