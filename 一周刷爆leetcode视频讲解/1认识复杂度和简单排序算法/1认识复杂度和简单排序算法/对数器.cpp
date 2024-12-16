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
//    //��׼����std::sort���Ƚ���
//    static void comparator(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//    }
//
//    //�������������
//    static vector<int> generateRandomArray(int maxSize, int maxValue) {
//
//        //����һ������ arr���䳤����һ���������ȡֵ��ΧΪ[0, maxSize]��
//        vector<int> arr(rand() % (maxSize + 1));
//
//        for (size_t i = 0; i < arr.size(); i++) {
//            //rand() % (maxValue + 1)
//            //����һ�����������ȡֵ��ΧΪ[0, maxValue]��
//            //    �� 1 ��Ϊ�˰��� maxValue��
//
//            // rand() % maxValue
//            //   ����һ�����������ȡֵ��ΧΪ[0, maxValue - 1]��
//
//            //rand() % (maxValue + 1) - rand() % maxValue��
//            //    ��һ�����������������һ���Ǹ��������ڶ����������������Ϊһ����ƫ�����������븺ֵ��
//            //    ����ķ�Χ������[-maxValue, maxValue]�������巶Χ�� rand() ������������Ӱ�졣
//            arr[i] = rand() % (maxValue + 1) - rand() % maxValue;
//        }
//        return arr;
//    }
//
//    //���鿽������
//    static vector<int> copyArray(const vector<int>& arr) {
//        return vector<int>(arr.begin(), arr.end());
//    }
//
//    //����ȽϺ���
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
//    //�����ӡ����
//    static void printArray(const vector<int>& arr) {
//        for (int num : arr) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    srand(time(0)); // �õ�ǰʱ����Ϊ���ӳ�ʼ���������������ȷ��ÿ���������ɵ��������ͬ��
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
