#include <iostream>
#include <algorithm> // for std::fill
using namespace std;

const int MAX_N = 1000;
long long dp[MAX_N + 1]; // Use long long for dp array

long long fib(int n) {
    if (n == 0 || n == 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    // Initialize dp array with -1
    fill(dp, dp + MAX_N + 1, -1);

    int n = 1000;
    cout << fib(n) << endl;
    return 0;
}
