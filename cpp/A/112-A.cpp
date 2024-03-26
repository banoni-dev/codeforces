#include <iostream>

using namespace std;


int main(){

  string s1, s2;
  cin >> s1 >> s2;
  for(int i = 0; i < s1.size(); i++){
    if(char(tolower(s1[i])) < char(tolower(s2[i]))){
      cout << -1 << endl;
      return 0;
  }else if(char(tolower(s1[i])) > char(tolower(s2[i]))){
      cout << 1 << endl;
      return 0;
    }
  }

  cout << 0 << endl;
}
