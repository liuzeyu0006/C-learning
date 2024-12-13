////堆排序扩展题目
////已知一个几乎有序()的数组，几乎有序是指，如果把数组排好顺序的话，每个元
////素移动的距离可以不超过k(关键信息，这个k内求局部最小值)，并且k相对于数组来说比较小。请选择一个合适的
////排序算法针对这个数据进行排序。
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
//        // 在 Java 中，PriorityQueue 默认为最小堆，而在 C++ 中，默认是最大堆，所以需要通过 greater<int> 来调整。
//        priority_queue<int, vector<int>, greater<int>> heap;
//
//        int index = 0;
//        // 初始阶段，先将数组中的前 min(arr.size(), k) 个元素加入到堆中。这一步是为了设置窗口的初始大小，窗口大小决定了元素排序的局部范围。
//        for (; index < min((int)arr.size(), k); index++) {
//            heap.push(arr[index]);
//        }
//
//        //这里index出来是3
//        int i = 0;
//        //对于数组中 k 位置之后的每一个元素，继续将其添加到堆中，并从堆中取出当前最小元素放入数组的当前位置（即 i）。
//        //输入给最小堆一个数，弹出一个最小值
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
