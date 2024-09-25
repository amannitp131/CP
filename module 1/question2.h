#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans = 0, i = 1;
    cin >> n;
    
    while (n > 0) {
        int digit = n % 10;
        if(n==9){
            ans += i * digit;
        }
        else if (digit > 4) {
            ans += i * (9 - digit);
        } else {
            ans += i * digit;
        }
        n /= 10;
        i *= 10;
    }
    
    cout << ans;
}
