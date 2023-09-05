#include <iostream>
using namespace std;
#define ll long long int;

int main() {

  int n, reversed_number = 0, remainder;
  cin >> n;
  int temp = n;
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  if(temp == reversed_number){
    while(reversed_number%10==0){
        reversed_number/=10;
    }

      cout<<reversed_number<<endl;
        cout << "YES" << endl;
  }
  else{
    while(reversed_number%10==0){
        reversed_number/=10;
    }
        cout<<reversed_number<<endl;
            cout << "NO" << endl;
  }
 
}