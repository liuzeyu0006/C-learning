//#include <iostream>
//#include <vector>
//using namespace std;
//
//class MergeSort {
//public:
//    static void mergeSort(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//        mergeSort(arr, 0, arr.size() - 1);
//    }
//
//private:
//    static void mergeSort(vector<int>& arr, int l, int r) {
//        if (l == r) {
//            return;
//        }
//        int mid = l + ((r - l) >> 1); // Avoid overflow
//        mergeSort(arr, l, mid);
//        mergeSort(arr, mid + 1, r);
//        merge(arr, l, mid, r);
//    }
//
//    static void merge(vector<int>& arr, int l, int m, int r) {
//        vector<int> help(r - l + 1);
//        int i = 0;
//        int p1 = l;     // Pointer for left subarray
//        int p2 = m + 1; // Pointer for right subarray
//
//        while (p1 <= m && p2 <= r) {
//            help[i++] = (arr[p1] < arr[p2]) ? arr[p1++] : arr[p2++];
//        }
//        while (p1 <= m) {
//            help[i++] = arr[p1++];
//        }
//        while (p2 <= r) {
//            help[i++] = arr[p2++];
//        }
//        for (i = 0; i < help.size(); i++) {
//            arr[l + i] = help[i];
//        }
//    }
//};
//
//int main() {
//    vector<int> arr = { 7, 3, 1, 9, 5, 8, 5, 6, 2 }; // Example array
//    MergeSort::mergeSort(arr);
//
//    cout << "Sorted array: ";
//    for (int num : arr) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
