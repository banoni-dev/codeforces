#include <iostream>

using namespace std;



int main() {
    int n, k,x, count = 1;
    cin >> n >> k;
    while (1) {
        x = n * count;
        if (x % 10 == k || x % 10 == 0) {
            printf("%d\n", count);
            break;
        }
        count++;
    }

    return 0;
}
