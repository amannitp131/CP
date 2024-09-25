#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string str[5];
    bool found = false;

    // Read the input string `s`
    cin >> s;

    // Read the 5 strings into `str` array
    for (int i = 0; i < 5; i++) {
        cin >> str[i];
    }

    // Check the conditions
    for (int i = 0; i < 5; i++) {
        if ((str[i].substr(0, 1) == s.substr(0, 1)) || 
            (str[i].substr(1) == s.substr(1))) {
            cout << "YES";
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "NO";
    }

    return 0;
}
