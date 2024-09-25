#include <bits/stdc++.h> 

int main()
{
    int t, total = 0,maxtotal=0;
    std::cin >> t;
    int arr[t], brr[t];
    
    for (int i = 0; i < t; i++) {
        std::cin >> arr[i] >> brr[i];
        if (i == 0) {
            total = arr[0];
        } else {
            total -= arr[i];
        }
        total += brr[i];
        maxtotal=std::max(total,maxtotal);
    }
    std::cout << maxtotal;

    return 0;
}
