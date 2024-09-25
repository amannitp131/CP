#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        if (a > b) {
            // Max i such that a*i + b <= n
            int i = (n - b-1) / a;
            cout << i << endl;
        } else {
            // Max i such that b*i + a <= n
            int i = (n - a-1) / b;
            cout << i << endl;
        }
    }
    return 0;
}
