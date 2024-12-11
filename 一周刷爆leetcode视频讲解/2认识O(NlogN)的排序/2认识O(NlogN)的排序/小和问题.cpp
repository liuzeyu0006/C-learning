//#include <iostream>
//#include <vector>
//using namespace std;
//
////小和问题和逆序对问题
////小和问题
////在一个数组中，每一个数左边比当前数小的数累加起来，叫做这个数组
////的小和。求一个数组 的小和
//
//
//class SmallSum {
//public:
//    static int smallSum(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return 0;
//        }
//        return mergeSort(arr, 0, arr.size() - 1);
//    }
//
//private:
//    static int mergeSort(vector<int>& arr, int l, int r) {
//        if (l == r) {
//            return 0;
//        }
//        int mid = l + ((r - l) >> 1); // Avoid overflow
//        return mergeSort(arr, l, mid)
//            + mergeSort(arr, mid + 1, r)
//            + merge(arr, l, mid, r);
//    }
//
//    static int merge(vector<int>& arr, int l, int m, int r) {
//        vector<int> help(r - l + 1);
//        int i = 0;
//        int p1 = l;      // Pointer for left subarray
//        int p2 = m + 1;  // Pointer for right subarray
//        int res = 0;
//
//        while (p1 <= m && p2 <= r) {
//            if (arr[p1] < arr[p2]) {
//                res += (r - p2 + 1) * arr[p1];
//                help[i++] = arr[p1++];
//            }
//            else {
//                help[i++] = arr[p2++];
//            }
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
//        return res;
//    }
//};
//
//int main() {
//    vector<int> arr = { 1, 3, 4, 2, 5 }; // Example array
//    int result = SmallSum::smallSum(arr);
//    cout << "The small sum is: " << result << endl;
//    return 0;
//}
