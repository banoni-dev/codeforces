#include <iostream>
using namespace std;


int main(){
  int t ,n, h, c=0;
  cin >> t >> h;
  while(t--){
    cin >> n;
    if(n <= h){
      c++;
    }else{
      c += 2;
    }
  }
  cout << c << endl;
}
