//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////—°‘Ò≈≈–Ú
//class SelectionSort {
//public:
//    static void selectionSort(std::vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//        for (size_t i = 0; i < arr.size() - 1; i++) {
//            size_t minIndex = i;
//            for (size_t j = i + 1; j < arr.size(); j++) {
//                if (arr[j] < arr[minIndex]) {
//                    minIndex = j;
//                }
//            }
//            swap(arr, i, minIndex);
//        }
//    }
//
//private:
//    static void swap(std::vector<int>& arr, size_t i, size_t j) {
//        int tmp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = tmp;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 64, 25, 12, 22, 11 };
//    SelectionSort::selectionSort(arr);
//
//    std::cout << "Sorted array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
