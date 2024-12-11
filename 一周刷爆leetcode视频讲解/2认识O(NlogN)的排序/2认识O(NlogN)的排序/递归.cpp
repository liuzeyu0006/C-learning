//#include <iostream>
//#include <vector>
//#include <algorithm> // for std::max
//
//class GetMax {
//public:
//    static int getMax(const std::vector<int>& arr) {
//        return process(arr, 0, arr.size() - 1);
//    }
//
//private:
//    static int process(const std::vector<int>& arr, int L, int R) {
//        if (L == R) {
//            return arr[L];
//        }
//        int mid = L + ((R - L) >> 1); // Avoid overflow, equivalent to (L + R) / 2
//        int leftMax = process(arr, L, mid);
//        int rightMax = process(arr, mid + 1, R);
//        return std::max(leftMax, rightMax);
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 1, 3, 7, 2, 9, 4 }; // Example array
//    int maxValue = GetMax::getMax(arr);
//    std::cout << "The maximum value in the array is: " << maxValue << std::endl;
//    return 0;
//}
