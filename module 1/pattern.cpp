#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
int p = 2 * n - 1;
for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
           int value = n - min({i, j, p - 1 - i, p - 1 - j});
            cout << value;
        }
        cout << endl;
    }

    return 0;
}
