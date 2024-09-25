#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        int index = -1; 
        int s = 0;
        cin >> n;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == '1') { 
                if (index == -1) { 
                    index = i; 
                }else{
                    s=s+(i-index-1);
                    index=i;
                }
                
            }
        }
        cout << s << endl; 
    }
    return 0;
}
