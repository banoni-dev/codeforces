#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    while(n--) {
        int b, c, k, count=0;
        cin >> b >> c >> k;
        int ba[b], ca[c];
        for(int i = 0; i < b; i++) {
            cin >> ba[i];
        }
        for(int i = 0; i < c; i++) {
            cin >> ca[i];
        }
        for(int i = 0; i < b; i++) {
            for(int j = 0; j < c; j++) {
                if(ba[i] + ca[j] <= k) {
                    count++;
                }
            }
        }
        cout << count << endl; 
    }
    return 0;
}
