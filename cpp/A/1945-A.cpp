#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) {
    int a, b, c, s=0;
    cin >> a >> b >> c;
    if (b % 3 != 0 && c <=1 && b%3 + c%3 != 3) {
      arr[i]=-1;
    }else{

      arr[i] = a + b/3 + c/3;
      if (b%3 + c%3 > 0) arr[i]++;
      if (b%3 + c%3 > 3) arr[i]++;

    }

    }

  for (int i=0; i<n; i++) {
    cout << arr[i] << endl; 
  }

}
