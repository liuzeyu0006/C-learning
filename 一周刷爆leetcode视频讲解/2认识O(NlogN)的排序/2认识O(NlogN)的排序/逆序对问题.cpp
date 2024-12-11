//#include <iostream>
//#include <vector>
//using namespace std;
//
////逆序对问题 在一个数组中，左边的数如果比右边的数大，则这两个数
////构成一个逆序对，请打印所有逆序 对。
//class InversionPairs {
//public:
//    static vector<pair<int, int>> findInversionPairs(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return {};
//        }
//        vector<pair<int, int>> result;
//        mergeSort(arr, 0, arr.size() - 1, result);
//        return result;
//    }
//
//private:
//    static void mergeSort(vector<int>& arr, int l, int r, vector<pair<int, int>>& result) {
//        if (l == r) {
//            return;
//        }
//        int mid = l + ((r - l) >> 1);
//        mergeSort(arr, l, mid, result);
//        mergeSort(arr, mid + 1, r, result);
//        merge(arr, l, mid, r, result);
//    }
//
//    static void merge(vector<int>& arr, int l, int m, int r, vector<pair<int, int>>& result) {
//        vector<int> help(r - l + 1);
//        int i = 0;
//        int p1 = l;
//        int p2 = m + 1;
//
//        while (p1 <= m && p2 <= r) {
//            if (arr[p1] > arr[p2]) {
//                // Record all inversion pairs (arr[p1] > arr[p2])
//                for (int k = p2; k <= r; k++) {
//                    result.emplace_back(arr[p1], arr[k]);
//                }
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
//    }
//};
//
//int main() {
//    vector<int> arr = { 7, 5, 6, 4 }; // Example array
//    vector<pair<int, int>> inversions = InversionPairs::findInversionPairs(arr);
//
//    cout << "Inversion pairs: " << endl;
//    for (const auto& pair : inversions) {
//        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
//    }
//
//    return 0;
//}
