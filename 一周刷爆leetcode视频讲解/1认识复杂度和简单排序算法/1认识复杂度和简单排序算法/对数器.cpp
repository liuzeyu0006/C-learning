//#include <iostream>
//#include <vector>
//#include <algorithm> // for std::sort
//#include <cstdlib>   // for rand and srand
//#include <ctime>     // for time
//
//using namespace std;
//
//class InsertionSort {
//public:
//    static void insertionSort(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//
//        for (size_t i = 1; i < arr.size(); i++) {
//            for (size_t j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
//                swap(arr[j - 1], arr[j]);
//            }
//        }
//    }
//
//    //标准排序（std::sort）比较器
//    static void comparator(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//    }
//
//    //随机数组生成器
//    static vector<int> generateRandomArray(int maxSize, int maxValue) {
//
//        //创建一个向量 arr，其长度是一个随机数，取值范围为[0, maxSize]。
//        vector<int> arr(rand() % (maxSize + 1));
//
//        for (size_t i = 0; i < arr.size(); i++) {
//            //rand() % (maxValue + 1)
//            //生成一个随机整数，取值范围为[0, maxValue]。
//            //    加 1 是为了包含 maxValue。
//
//            // rand() % maxValue
//            //   生成一个随机整数，取值范围为[0, maxValue - 1]。
//
//            //rand() % (maxValue + 1) - rand() % maxValue：
//            //    第一个随机数生成器产生一个非负整数，第二个随机数生成器作为一个“偏移量”来引入负值。
//            //    结果的范围大致在[-maxValue, maxValue]，但具体范围受 rand() 生成器的性质影响。
//            arr[i] = rand() % (maxValue + 1) - rand() % maxValue;
//        }
//        return arr;
//    }
//
//    //数组拷贝函数
//    static vector<int> copyArray(const vector<int>& arr) {
//        return vector<int>(arr.begin(), arr.end());
//    }
//
//    //数组比较函数
//    static bool isEqual(const vector<int>& arr1, const vector<int>& arr2) {
//        if (arr1.size() != arr2.size()) {
//            return false;
//        }
//        for (size_t i = 0; i < arr1.size(); i++) {
//            if (arr1[i] != arr2[i]) {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    //数组打印函数
//    static void printArray(const vector<int>& arr) {
//        for (int num : arr) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    srand(time(0)); // 用当前时间作为种子初始化随机数生成器，确保每次运行生成的随机数不同。
//
//    int testTime = 500000;
//    int maxSize = 100;
//    int maxValue = 100;
//    bool succeed = true;
//
//    for (int i = 0; i < testTime; i++) {
//        vector<int> arr1 = InsertionSort::generateRandomArray(maxSize, maxValue);
//        vector<int> arr2 = InsertionSort::copyArray(arr1);
//        InsertionSort::insertionSort(arr1);
//        InsertionSort::comparator(arr2);
//
//        if (!InsertionSort::isEqual(arr1, arr2)) {
//            succeed = false;
//            break;
//        }
//    }
//
//    cout << (succeed ? "Nice!" : "Fucking fucked!") << endl;
//
//    vector<int> arr = InsertionSort::generateRandomArray(maxSize, maxValue);
//    InsertionSort::printArray(arr);
//    InsertionSort::insertionSort(arr);
//    InsertionSort::printArray(arr);
//
//    return 0;
//}
