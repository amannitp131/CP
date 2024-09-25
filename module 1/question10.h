#include <iostream>
#include <algorithm> // for max_element, min_element, find
#include <vector>    // for std::vector

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    auto maxIt = std::max_element(arr.begin(), arr.end());
     int minin = 0;

    int maxin = std::distance(arr.begin(), maxIt);
     for (int i = 1; i < n; ++i) {
        if (arr[i] <= arr[minin]) {  // Note the <= to get the highest index for minimum value
            minin = i;
        }
    }

    if (maxin < minin) {
        std::cout << (maxin - 0) + (n - 1 - minin) << std::endl;
    } else {
        std::cout << (maxin - 0) + (n - 2 - minin) << std::endl;
    }

    return 0;
}
