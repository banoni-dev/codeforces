#include <bits/stdc++.h>
using namespace std;

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
int signF(long int x){return (x>0) - (x<0); }

int solve(){
  long int n=0;
  long int t=0;
  long int s=0;
  int k=0;
  int z=0;
  
  cin >> t;
  int a[t];
  
  for (int i=0; i < t; i++) {
        cin >> n;   
        a[i] = n;
        k+=(n>=0);
        z+=(n == 0);
        s+=n;
  }

  if (k==t){
    cout << s << endl;
    return 0;
  }
  if (k-z==0){
    cout << -s << endl;
    return 0;
  }
  long int l=a[0];
  s=l;
  for (int i=1;i<t;i++){
    if (signF(l) < signF(a[i]) && s<0){
    
      s=-s;
    }
    s+=a[i];
    if (s<=0 && signF(l) > 0){
      s=-s;
    }
  }
  cout << s << endl;
  return 0;

}


int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

