#include <bits/stdc++.h>
using namespace std;


int main(){
  int a,b,x; cin >> a >> b >> x;
  if((a+b) % x == 0 || a % x == 0 || b % x == 0){
    cout << "YES" << endl;
    return 0;
  }
  cout << "NO" << endl;
}
