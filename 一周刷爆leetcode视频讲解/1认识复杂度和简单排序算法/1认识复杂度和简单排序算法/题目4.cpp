//#include <iostream>
//#include <vector>
//
////局部最小值问题
//class FindOneLessValueIndex {
//public:
//    static int getLessIndex(const std::vector<int>& arr) {
//        if (arr.empty()) {
//            return -1; // no exist
//        }
//        if (arr.size() == 1 || arr[0] < arr[1]) {
//            return 0;
//        }
//        if (arr[arr.size() - 1] < arr[arr.size() - 2]) {
//            return arr.size() - 1;
//        }
//
//        int left = 1;
//        int right = arr.size() - 2;
//        int mid = 0;
//
//        while (left < right) {
//            mid = (left + right) / 2;
//            if (arr[mid] > arr[mid - 1]) {
//                right = mid - 1;
//            }
//            else if (arr[mid] > arr[mid + 1]) {
//                left = mid + 1;
//            }
//            else {
//                return mid;
//            }
//        }
//        return left;
//    }
//
//    static void printArray(const std::vector<int>& arr) {
//        for (int num : arr) {
//            std::cout << num << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 6, 5, 3, 4, 6, 7, 8 }; // Example array
//    FindOneLessValueIndex::printArray(arr);
//
//    int index = FindOneLessValueIndex::getLessIndex(arr);
//    if (index != -1) {
//        std::cout << "index: " << index << ", value: " << arr[index] << std::endl;
//    }
//    else {
//        std::cout << "No such index found." << std::endl;
//    }
//
//    return 0;
//}
