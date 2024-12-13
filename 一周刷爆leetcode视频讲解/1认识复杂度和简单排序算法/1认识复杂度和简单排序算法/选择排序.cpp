//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////选择排序
//class SelectionSort {
//public:
//    //在类中，static 的作用
//    //    在类中，static 用于修饰成员变量或成员函数，主要作用是使其成为静态成员。静态成员具有以下特性：
//    //    与类关联，而不是与对象关联
//    //    静态成员函数和静态成员变量是属于类本身的，而不是属于类的某个对象。
//    //    这意味着，即使没有创建任何对象，也可以通过类名直接访问静态成员。
//    //    共享性：
//    //    静态成员在所有对象之间共享，而非每个对象都有一份单独的拷贝。
//    //    对静态成员变量的修改会影响所有对象。
//    //    静态成员函数的特点：
//    //    静态成员函数只能访问静态成员（静态变量和其他静态函数），不能直接访问非静态成员。
//    //    原因是非静态成员属于具体的对象，而静态成员函数不依赖任何对象。
//
//    //静态版本更加简洁：无需创建对象实例，可以直接通过类名调用。
//    static void selectionSort(std::vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//        //使用size_t而不是int的原因
//        //size_t 是无符号整数类型，适用于数组索引和大小
//        //在 64 位系统中，size_t 通常为 64 位宽，能够表示更大的值范围，而 int 通常为 32 位宽。
//        //C++ 标准模板库（STL）的容器，如 std::vector、std::string、std::map 等，其 size() 方法的返回值是 size_t。
// 
//        外层-1是因为最后一个元素已经是正确位置
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
//    //等价代码是
//    //for (auto it = arr.begin(); it != arr.end(); ++it) {
//    //    int num = *it; // 获取当前元素
//    //    std::cout << num << " ";
//    //}
//
//    return 0;
//}
