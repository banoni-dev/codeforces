
#include <bits/stdc++.h>
using namespace std;

void transformString() {
    int length;
    cin >> length;
    string input;
    cin >> input;
    string distinctChars;
    for (int j = 0; j < input.size(); j++) {
        if (distinctChars.find(input[j]) == string::npos) {
            distinctChars += input[j];
        }
    }
    sort(distinctChars.begin(), distinctChars.end());
    for (int j = 0; j < input.size(); j++) {
        int pos = distinctChars.find(input[j]);
        int newPos = distinctChars.size() - pos - 1;
        cout << distinctChars[newPos];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        transformString();
    }

    return 0;
}
