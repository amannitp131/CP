#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, n;
        cin >> a >> b >> n;

        int steps = 0;

        if (a >= b) {
            // We need to increase b until it exceeds n
            // b + a * i > n
            // a * i > n - b
            // i > (n - b) / a
            if (b <= n) {
                steps = (n - b) / a + 1;
            }
        } else {
            // We need to increase a until it exceeds n
            // a + b * i > n
            // b * i > n - a
            // i > (n - a) / b
            if (a <= n) {
                steps = (n - a) / b + 1;
            }
        }

        cout << steps  << endl; // +1 because we count from step 1
    }
    return 0;
}
