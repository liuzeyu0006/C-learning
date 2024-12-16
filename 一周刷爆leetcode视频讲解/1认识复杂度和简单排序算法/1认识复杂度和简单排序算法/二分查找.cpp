#include <iostream>
#include <vector>

class BinarySearch {
public:
    static bool exist(const std::vector<int>& sortedArr, int num) {
        if (sortedArr.empty()) {
            return false;
        }

        int L = 0;
        int R = sortedArr.size() - 1;
        int mid = 0;

        while (L < R) {
            mid = L + ((R - L) >> 1); // Equivalent to (L + R) / 2 but avoids overflow
            if (sortedArr[mid] == num) {
                return true;
            }
            else if (sortedArr[mid] > num) {
                R = mid - 1;
            }
            else {
                L = mid + 1;
            }
        }

        return sortedArr[L] == num;
    }
};

int main() {
    std::vector<int> sortedArr = { 1, 2, 3, 5, 6, 8, 9 }; // Example sorted array
    int num = 5; // Example number to search for

    if (BinarySearch::exist(sortedArr, num)) {
        std::cout << "Number " << num << " exists in the array." << std::endl;
    }
    else {
        std::cout << "Number " << num << " does not exist in the array." << std::endl;
    }

    return 0;
}
