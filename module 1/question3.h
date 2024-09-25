#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5], p, q;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                p = i;
                q = j;
            }
        }
    }
    cout << abs(2 - p) + abs(2 - q) << endl;

    return 0;
}
