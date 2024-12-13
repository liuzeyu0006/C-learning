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

//Ѱ�����ֵ
int maxbits(const std::vector<int>& arr) {
    int max = *std::max_element(arr.begin(), arr.end());//std::max_element ���ص���һ����������ָ�����������Ԫ�ص�λ�á�
    int res = 0;
    while (max != 0) {
        res++;
        max /= 10;
    }
    return res;//res�൱�����ֵ�м���ʮ����λ
}

void radixSort(std::vector<int>& arr, int begin, int end, int digit) {//digit��ʾ���������ж��ٸ�ʮ����λ
    const int radix = 10;//��10Ϊ����
    std::vector<int> bucket(end - begin + 1); // bucket �Ǹ������飬�����洢ÿһ�������Ľ�����ж��ٸ�����׼�����ٸ����ռ�
    std::vector<int> count(radix);//count ��һ����СΪ 10 �����飬������¼ÿһλ���֣�0-9���ĳ���Ƶ�ʡ�

    for (int d = 1; d <= digit; d++) {//�ж���ʮ����λ�ͽ������ٴΣ�100���ǽ���Ͱ���� 
        std::fill(count.begin(), count.end(), 0);// ��ռ�����

        //����������ָ����Χ��Ԫ�أ����� getDigit ������ȡÿ�������ڵ�ǰλ���ϵ�ֵ��
        //ͨ�� count[j]++ͳ��ÿ�����֣�0 - 9���ڵ�ǰλ�ϵĳ��ִ�����
        for (int i = begin; i <= end; i++) {
            int j = getDigit(arr[i], d);
            count[j]++; 
        }

        //�����ǰ׺�� 
        for (int i = 1; i < radix; i++) {
            count[i] += count[i - 1];
        }

        //��������������
        for (int i = end; i >= begin; i--) {
            int j = getDigit(arr[i], d);//�ó��Ǹ�λ������
            bucket[count[j] - 1] = arr[i];//����count��ֵ-1�������������ȥ
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
