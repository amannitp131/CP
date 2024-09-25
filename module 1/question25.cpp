#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    string n;
    cin >> n;

    vector<char> result;
    int index = 0;
    int step = 1;

    while (index < n.size()) {
        result.push_back(n[index]);
        index += step;
        step++;
    }

    for (char ch : result) {
        cout << ch;
    }
    cout << endl;

    return 0;
}
