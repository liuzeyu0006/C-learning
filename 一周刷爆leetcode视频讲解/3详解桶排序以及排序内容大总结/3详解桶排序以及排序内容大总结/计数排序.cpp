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
//    //maxVal��ʹ�� std::max_element ���������е����ֵ��
//    //max_element ���ص���һ��ָ�����Ԫ�صĵ������������ú�õ����ֵ��maxVal ����ȷ��Ͱ�Ĵ�С����Ϊ��������Ҫ��֪�����ֵ��ȷ��Ͱ�ķ�Χ��
//    int maxVal = *max_element(arr.begin(), arr.end());
//    vector<int> bucket(maxVal + 1, 0);//bucket[i] ��ʾ���� i �������г��ֵĴ�����
//
//    for (int num : arr) {
//        bucket[num]++;//bucket[i] ��ʾ���� i �������г��ֵĴ�����
//    }
//
//    int index = 0;
//    for (int i = 0; i < bucket.size(); i++) {
//
//        while (bucket[i]-- > 0) {//���д���������ǽ����� i ����ԭ���� arr �С�bucket[i] �洢�������� i ��ԭ�����г��ֵĴ�����
//            //bucket[i]--������һ������������� bucket[i] ��ֵ�ȱ�ʹ�ã���Ϊ�ж���������Ȼ���ٵݼ���ͨ���������������ʵ���˽����� i ����������λ�õĹ��ܡ�
//            //bucket[i]-- > 0���ж� bucket[i] �Ƿ���� 0����ʾ�Ƿ���ʣ��� i Ҫ���� arr �С�ÿ����һ�� i��bucket[i] ��ֵ�ͼ� 1��
//            arr[index++] = i;/* arr[index++] �ǽ����� i ����ԭ���� arr �У����Ҹ��� index������Ԫ�ط����������һ��λ��
//                              index++ �Ǻ�׺��������ʾ�Ƚ���ǰֵ���� arr��Ȼ�� index �� 1��ָ����һ��λ�á�
//                              ���������� arr �ᰴ˳�����*/
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
