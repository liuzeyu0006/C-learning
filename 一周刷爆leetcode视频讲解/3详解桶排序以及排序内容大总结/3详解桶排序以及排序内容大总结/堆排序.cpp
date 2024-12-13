//#include <iostream>
//#include <vector>
//#include <algorithm> // for std::swap
//
//using namespace std;
//
////堆排序
////1)从上到下的方法，时间复杂度为O(N* logN)
////2)从下到上的方法，时间复杂度为O(N)
//
////时间复杂度O(N* logN)
////格外空间复杂度O(1)
//
//class HeapSort {
//public:
//    static void heapSort(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//
//        // Build max-heap  建立大根堆
//        for (size_t i = 0; i < arr.size(); i++) {
//            heapInsert(arr, i);
//        }
//
//        // Heap sort
//        size_t size = arr.size();
//        swap(arr[0], arr[--size]); // 0位置上的数和堆上最后一个位置的数进行交换，堆的大小--
//        while (size > 0) {
//            heapify(arr, 0, size); // Restore heap property
//            swap(arr[0], arr[--size]); // Move next max to the end
//        }
//    }
//
//    static void heapInsert(vector<int>& arr, size_t index) {
//        // 比较当前节点与其父节点的值。
//        //如果当前节点的值大于父节点的值，说明堆的最大堆性质被破坏，需要交换位置。
//        //父节点的位置为(index - 1) / 2（由完全二叉树的性质决定）。
//
//        while (index > 0 && arr[index] > arr[(index - 1) / 2]) {
//            swap(arr[index], arr[(index - 1) / 2]);
//
//            //index来到了父的位置，继续往上比较
//            index = (index - 1) / 2;
//        }
//    }
//
//    static void heapify(vector<int>& arr, size_t index, size_t size) {
//        size_t left = index * 2 + 1;//左孩子下标
//
//        /*左孩子的索引为 index * 2 + 1。
//        右孩子的索引为 index * 2 + 2。*/
//
//        while (left < size) {//下方还有孩子的时候
//
//            // 两个孩子中，谁的值大，把下标给largest
//            size_t largest = (left + 1 < size && arr[left + 1] > arr[left]) ? left + 1 : left;
//
//            //父亲和孩子之间谁的值大，把下标给largest
//            largest = (arr[largest] > arr[index]) ? largest : index;
//
//            if (largest == index) {
//                break; // If largest is the current index, heap is already valid
//            }
//
//            swap(arr[index], arr[largest]);
//            index = largest;
//            left = index * 2 + 1;
//
//                //在堆排序中，heapify 的任务是从某个节点开始向下调整，确保以该节点为根的子树满足最大堆性质（父节点值 ≥ 子节点值）。
//                //调整过程的关键逻辑：
//                //比较当前节点（index）、左子节点和右子节点，找到最大值所在的位置（largest）。
//                //如果当前节点已经是最大值，直接退出（break）。
//                //如果子节点中有更大的值，交换当前节点和最大值所在节点的位置。
//                //更新当前节点位置（index）为最大值所在位置，继续向下调整，重复以上过程，直到子树的堆性质恢复。
//                //终止条件：
//                //当前节点已经是子树中的最大值，退出调整。
//                //当前节点没有子节点（left >= size），退出循环。
//        }
//    }
//
//    static void swap(int& a, int& b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//
//    static void printArray(const vector<int>& arr) {
//        for (const int& num : arr) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    vector<int> arr = { 5, 3, 8, 4, 2, 7, 1, 10 };
//    cout << "Original array:" << endl;
//    HeapSort::printArray(arr);
//
//    HeapSort::heapSort(arr);
//
//    cout << "Sorted array:" << endl;
//    HeapSort::printArray(arr);
//
//    return 0;
//}
