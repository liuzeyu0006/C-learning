//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//// Only for 0~200 value
//void countSort(vector<int>& arr) {
//    if (arr.empty() || arr.size() < 2) {
//        return;
//    }
//
//    //maxVal：使用 std::max_element 查找数组中的最大值。
//    //max_element 返回的是一个指向最大元素的迭代器，解引用后得到最大值。maxVal 用来确定桶的大小，因为计数排序要求知道最大值来确定桶的范围。
//    int maxVal = *max_element(arr.begin(), arr.end());
//    vector<int> bucket(maxVal + 1, 0);//bucket[i] 表示数字 i 在数组中出现的次数。
//
//    for (int num : arr) {
//        bucket[num]++;//bucket[i] 表示数字 i 在数组中出现的次数。
//    }
//
//    int index = 0;
//    for (int i = 0; i < bucket.size(); i++) {
//
//        while (bucket[i]-- > 0) {//这行代码的作用是将数字 i 放入原数组 arr 中。bucket[i] 存储的是数字 i 在原数组中出现的次数。
//            //bucket[i]--：这是一个后减操作，即 bucket[i] 的值先被使用（作为判断条件），然后再递减。通过这个操作，我们实现了将数字 i 放入数组多个位置的功能。
//            //bucket[i]-- > 0：判断 bucket[i] 是否大于 0，表示是否还有剩余的 i 要填入 arr 中。每填入一个 i，bucket[i] 的值就减 1。
//            arr[index++] = i;/* arr[index++] 是将数字 i 放入原数组 arr 中，并且更新 index，即将元素放入数组的下一个位置
//                              index++ 是后缀自增，表示先将当前值放入 arr，然后 index 加 1，指向下一个位置。
//                              这样，数组 arr 会按顺序被填充*/
//        }
//    }
//}
//
//// For test
//void comparator(vector<int>& arr) {
//    sort(arr.begin(), arr.end());
//}
//
//// For test
//vector<int> generateRandomArray(int maxSize, int maxValue) {
//    int size = rand() % (maxSize + 1);
//    vector<int> arr(size);
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % (maxValue + 1);
//    }
//    return arr;
//}
//
//// For test
//vector<int> copyArray(const vector<int>& arr) {
//    return vector<int>(arr);
//}
//
//// For test
//bool isEqual(const vector<int>& arr1, const vector<int>& arr2) {
//    if (arr1.size() != arr2.size()) {
//        return false;
//    }
//    for (size_t i = 0; i < arr1.size(); i++) {
//        if (arr1[i] != arr2[i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//// For test
//void printArray(const vector<int>& arr) {
//    for (int num : arr) {
//        cout << num << " ";
//    }
//    cout << endl;
//}
//
//// Main function
//int main() {
//    srand(time(0)); // Seed for random number generation
//
//    int testTime = 500000;
//    int maxSize = 100;
//    int maxValue = 150;
//    bool succeed = true;
//
//    for (int i = 0; i < testTime; i++) {
//        vector<int> arr1 = generateRandomArray(maxSize, maxValue);
//        vector<int> arr2 = copyArray(arr1);
//        countSort(arr1);
//        comparator(arr2);
//        if (!isEqual(arr1, arr2)) {
//            succeed = false;
//            printArray(arr1);
//            printArray(arr2);
//            break;
//        }
//    }
//
//    cout << (succeed ? "Nice!" : "Fucking fucked!") << endl;
//
//    vector<int> arr = generateRandomArray(maxSize, maxValue);
//    printArray(arr);
//    countSort(arr);
//    printArray(arr);
//
//    return 0;
//}
