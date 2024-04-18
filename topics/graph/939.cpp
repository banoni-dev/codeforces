#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main(){
  // 939-A : Love Triangle
  int n;
  cin >> n;
  vector<int> v(n+1);
  for(int i=1; i<=n; i++){
    cin >> v[i];
  }
  for(int i=1; i<=n; i++){
    if(v[v[v[i]]] == i){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
