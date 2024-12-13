#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void printArray(const std::vector<int>& arr);
std::vector<int> generateRandomArray(int maxSize, int maxValue);
bool isEqual(const std::vector<int>& arr1, const std::vector<int>& arr2);
void comparator(std::vector<int>& arr);
void radixSort(std::vector<int>& arr);
int maxbits(const std::vector<int>& arr);
void radixSort(std::vector<int>& arr, int begin, int end, int digit);
int getDigit(int x, int d);

//int main() {
//    int testTime = 500000;
//    int maxSize = 100;
//    int maxValue = 100000;
//    bool succeed = true;
//    for (int i = 0; i < testTime; i++) {
//        auto arr1 = generateRandomArray(maxSize, maxValue);
//        auto arr2 = arr1;
//        radixSort(arr1);
//        comparator(arr2);
//        if (!isEqual(arr1, arr2)) {
//            succeed = false;
//            printArray(arr1);
//            printArray(arr2);
//            break;
//        }
//    }
//    std::cout << (succeed ? "Nice!" : "Fucking fucked!") << std::endl;
//
//    auto arr = generateRandomArray(maxSize, maxValue);
//    printArray(arr);
//    radixSort(arr);
//    printArray(arr);
//
//    return 0;
//}

int main() {
    std::vector<int> arr = { 170, 45, 75, 90, 802, 24, 2, 66 };
    std::vector<int> copyArr = arr;

    std::cout << "Original array: \n";
    printArray(arr);

    radixSort(arr);
    std::cout << "Sorted with radixSort: \n";
    printArray(arr);

    comparator(copyArr);
    std::cout << "Sorted with standard sort: \n";
    printArray(copyArr);

    std::cout << "Is equal: " << (isEqual(arr, copyArr) ? "Yes" : "No") << std::endl;

    return 0;
}

void printArray(const std::vector<int>& arr) {
    for (auto num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

std::vector<int> generateRandomArray(int maxSize, int maxValue) {
    std::vector<int> arr(rand() % (maxSize + 1));
    for (auto& value : arr) {
        value = rand() % (maxValue + 1);
    }
    return arr;
}

bool isEqual(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    return arr1 == arr2;
}

void comparator(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

void radixSort(std::vector<int>& arr) {
    if (arr.empty() || arr.size() < 2) {
        return;
    }
    radixSort(arr, 0, arr.size() - 1, maxbits(arr));
}

//寻找最大值
int maxbits(const std::vector<int>& arr) {
    int max = *std::max_element(arr.begin(), arr.end());//std::max_element 返回的是一个迭代器，指向容器中最大元素的位置。
    int res = 0;
    while (max != 0) {
        res++;
        max /= 10;
    }
    return res;//res相当于最大值有几个十进制位
}

void radixSort(std::vector<int>& arr, int begin, int end, int digit) {//digit表示最大的数中有多少个十进制位
    const int radix = 10;//以10为基底
    std::vector<int> bucket(end - begin + 1); // bucket 是辅助数组，用来存储每一轮排序后的结果。有多少个数就准备多少辅助空间
    std::vector<int> count(radix);//count 是一个大小为 10 的数组，用来记录每一位数字（0-9）的出现频率。

    for (int d = 1; d <= digit; d++) {//有多少十进制位就进出多少次，100就是进出桶三次 
        std::fill(count.begin(), count.end(), 0);// 清空计数器

        //遍历数组中指定范围的元素，调用 getDigit 函数获取每个数字在当前位数上的值。
        //通过 count[j]++统计每个数字（0 - 9）在当前位上的出现次数。
        for (int i = begin; i <= end; i++) {
            int j = getDigit(arr[i], d);
            count[j]++; 
        }

        //处理成前缀和 
        for (int i = 1; i < radix; i++) {
            count[i] += count[i - 1];
        }

        //数组从右往左遍历
        for (int i = end; i >= begin; i--) {
            int j = getDigit(arr[i], d);//拿出那个位的数字
            bucket[count[j] - 1] = arr[i];//根据count的值-1再填到辅助数组中去
            count[j]--;
        }

        for (int i = begin, j = 0; i <= end; i++, j++) {
            arr[i] = bucket[j];
        }
    }
}

int getDigit(int x, int d) {
    return (x / static_cast<int>(std::pow(10, d - 1))) % 10;
}
