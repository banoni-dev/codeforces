#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, x, count = 0;
    cin >> n >> x;
    long long s = x;
    while(n--) {
        char c;
        int d;
        cin >> c >> d;
        if( c == '+'){
            s+=d;
        }else{
          if(s-d < 0){
            count++;
          }else {
            s-=d;
          }
        }
  }
    cout << s << " " << count;
    return 0;
}
