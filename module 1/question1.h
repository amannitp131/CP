#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = 0;

    for (int i = 0; i < n; ++i) {
        string arr;
        cin >> arr;

        if (arr[0] == '+' || arr[1] == '+') {
            ++p;
        } else if (arr[0] == '-' || arr[1] == '-') {
            --p;
        }
    }

    cout << p << endl;

    return 0;
}
