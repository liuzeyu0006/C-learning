////在一个有序数组中，找 >= 某个数最左侧的位置
//#include <iostream>
//#include <vector>
//
//class BinarySearchNearLeft {
//public:
//    // 在 arr 上，找满足 >= value 的最左位置
//    static int nearestIndex(const std::vector<int>& arr, int value) {
//        int L = 0;
//        int R = arr.size() - 1;
//        int index = -1;
//
//        while (L <= R) { // 注意这里应为 <=，确保范围遍历完整
//            int mid = L + ((R - L) >> 1); // 等价于 (L + R) / 2
//            if (arr[mid] >= value) {
//                index = mid; // 更新索引，记录当前满足条件的位置
//                R = mid - 1; // 向左收缩
//            }
//            else {
//                L = mid + 1; // 向右收缩
//            }
//        }
//
//        return index;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 1, 2, 3, 3, 5, 6, 8, 9 }; // 示例数组
//    int value = 3; // 示例目标值
//
//    int index = BinarySearchNearLeft::nearestIndex(arr, value);
//    if (index != -1) {
//        std::cout << "The nearest index with value >= " << value << " is: " << index << std::endl;
//    }
//    else {
//        std::cout << "No element >= " << value << " found in the array." << std::endl;
//    }
//
//    return 0;
//}
