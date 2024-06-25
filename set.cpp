#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {1, 3, 5, 7, 9};
    int value = 10;

    auto upper = std::lower_bound(v.begin(), v.end(), value);

    if (upper != v.end()) {
        std::cout << "Upper bound for " << value << " is at position: " 
                  << (upper - v.begin() + 1) << " with value: " << *upper << std::endl;
    } else {
        std::cout << "Upper bound not found." << std::endl;
    }

    return 0;
}
