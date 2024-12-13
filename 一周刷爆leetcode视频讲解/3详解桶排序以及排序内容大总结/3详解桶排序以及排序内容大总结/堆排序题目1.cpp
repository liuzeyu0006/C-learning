////��������չ��Ŀ
////��֪һ����������()�����飬����������ָ������������ź�˳��Ļ���ÿ��Ԫ
////���ƶ��ľ�����Բ�����k(�ؼ���Ϣ�����k����ֲ���Сֵ)������k�����������˵�Ƚ�С����ѡ��һ�����ʵ�
////�����㷨���������ݽ�������
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <functional> // For greater
//
//using namespace std;
//
//class SortArrayDistanceLessK {
//public:
//    void sortedArrDistanceLessK(vector<int>& arr, int k) {
//        if (arr.size() < 2 || k <= 0) {
//            return; // No sorting needed if the array is too small or k is non-positive
//        }
//
//        // �� Java �У�PriorityQueue Ĭ��Ϊ��С�ѣ����� C++ �У�Ĭ�������ѣ�������Ҫͨ�� greater<int> ��������
//        priority_queue<int, vector<int>, greater<int>> heap;
//
//        int index = 0;
//        // ��ʼ�׶Σ��Ƚ������е�ǰ min(arr.size(), k) ��Ԫ�ؼ��뵽���С���һ����Ϊ�����ô��ڵĳ�ʼ��С�����ڴ�С������Ԫ������ľֲ���Χ��
//        for (; index < min((int)arr.size(), k); index++) {
//            heap.push(arr[index]);
//        }
//
//        //����index������3
//        int i = 0;
//        //���������� k λ��֮���ÿһ��Ԫ�أ�����������ӵ����У����Ӷ���ȡ����ǰ��СԪ�ط�������ĵ�ǰλ�ã��� i����
//        //�������С��һ����������һ����Сֵ
//        for (; index < arr.size(); i++, index++) {
//            heap.push(arr[index]);
//            arr[i] = heap.top();
//            heap.pop();
//        }
//
//        // Empty the heap and sort the initial segment of the array
//        while (!heap.empty()) {
//            arr[i++] = heap.top();
//            heap.pop();
//        }
//    }
//};
//
//int main() {
//    vector<int> arr = { 10, 3, 5, 1, 2, 8, 6, 7 };
//    int k = 3;
//
//    cout << "Original array:\n";
//    for (int num : arr) {
//        cout << num << " ";
//    }
//    cout << "\n";
//
//    SortArrayDistanceLessK sorter;
//    sorter.sortedArrDistanceLessK(arr, k);
//
//    cout << "Sorted array:\n";
//    for (int num : arr) {
//        cout << num << " ";
//    }
//    cout << "\n";
//
//    return 0;
//}
