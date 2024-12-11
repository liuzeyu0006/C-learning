//#include <iostream>
//#include <vector>
//
//class BubbleSort {
//public:
//    static void bubbleSort(std::vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//        for (size_t e = arr.size() - 1; e > 0; e--) {
//            for (size_t i = 0; i < e; i++) {
//                if (arr[i] > arr[i + 1]) {
//                    swap(arr, i, i + 1);
//                }
//            }
//        }
//    }
//
//private:
//    static void swap(std::vector<int>& arr, size_t i, size_t j) {
//        // XOR swap   0^N=N   N^N=0  异或满足交换律和结合律，但是要满足在内存中是两个独立的空间，i位置不等于j位置，否则会变为0
//        arr[i] = arr[i] ^ arr[j];
//        arr[j] = arr[i] ^ arr[j];
//        arr[i] = arr[i] ^ arr[j];
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
//    BubbleSort::bubbleSort(arr);
//
//    std::cout << "Sorted array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
