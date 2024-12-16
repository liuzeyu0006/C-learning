//#include <iostream>
//#include <vector>
//
////≤Â»Î≈≈–Ú
//class InsertionSort {
//public:
//    static void insertionSort(std::vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//
//        for (size_t i = 1; i < arr.size(); i++) {
//            for (size_t j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
//                swap(arr, j - 1, j);
//            }
//        }
//    }
//
//private:
//    static void swap(std::vector<int>& arr, size_t i, size_t j) {
//    int tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//        //arr[i] = arr[i] ^ arr[j];
//        //arr[j] = arr[i] ^ arr[j];
//        //arr[i] = arr[i] ^ arr[j];
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
//    InsertionSort::insertionSort(arr);
//
//    std::cout << "Sorted array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
