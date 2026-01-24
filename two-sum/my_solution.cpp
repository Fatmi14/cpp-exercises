#include <iostream>
#include <vector>

int main() {
    int target{};
    int max{};

    // إدخال حجم المصفوفة
    do {
        std::cout << "Enter the size of vector (>= 2): ";
        std::cin >> max;
    } while (max < 2 || max > 10000);

    std::vector<int> nums(max);

    // إدخال العناصر
    for (int i = 0; i < max; ++i) {
        std::cout << "Enter nums[" << i << "]: ";
        std::cin >> nums[i];
    }

    // إدخال الهدف
    std::cout << "Enter the target: ";
    std::cin >> target;

    bool found{false};

    // البحث عن Two Sum
    for (int i = 0; i < max && !found; ++i) {
        for (int k = i + 1; k < max; ++k) {
            if (nums[i] + nums[k] == target) {
                std::cout << "[" << i << ", " << k << "]" << std::endl;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        std::cout << "No valid pair found." << std::endl;
    }

    return 0;
}
