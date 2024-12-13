//#include <iostream>
//#include <vector>
//#include <algorithm> // for std::swap
//
//using namespace std;
//
////������
////1)���ϵ��µķ�����ʱ�临�Ӷ�ΪO(N* logN)
////2)���µ��ϵķ�����ʱ�临�Ӷ�ΪO(N)
//
////ʱ�临�Ӷ�O(N* logN)
////����ռ临�Ӷ�O(1)
//
//class HeapSort {
//public:
//    static void heapSort(vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//
//        // Build max-heap  ���������
//        for (size_t i = 0; i < arr.size(); i++) {
//            heapInsert(arr, i);
//        }
//
//        // Heap sort
//        size_t size = arr.size();
//        swap(arr[0], arr[--size]); // 0λ���ϵ����Ͷ������һ��λ�õ������н������ѵĴ�С--
//        while (size > 0) {
//            heapify(arr, 0, size); // Restore heap property
//            swap(arr[0], arr[--size]); // Move next max to the end
//        }
//    }
//
//    static void heapInsert(vector<int>& arr, size_t index) {
//        // �Ƚϵ�ǰ�ڵ����丸�ڵ��ֵ��
//        //�����ǰ�ڵ��ֵ���ڸ��ڵ��ֵ��˵���ѵ��������ʱ��ƻ�����Ҫ����λ�á�
//        //���ڵ��λ��Ϊ(index - 1) / 2������ȫ�����������ʾ�������
//
//        while (index > 0 && arr[index] > arr[(index - 1) / 2]) {
//            swap(arr[index], arr[(index - 1) / 2]);
//
//            //index�����˸���λ�ã��������ϱȽ�
//            index = (index - 1) / 2;
//        }
//    }
//
//    static void heapify(vector<int>& arr, size_t index, size_t size) {
//        size_t left = index * 2 + 1;//�����±�
//
//        /*���ӵ�����Ϊ index * 2 + 1��
//        �Һ��ӵ�����Ϊ index * 2 + 2��*/
//
//        while (left < size) {//�·����к��ӵ�ʱ��
//
//            // ���������У�˭��ֵ�󣬰��±��largest
//            size_t largest = (left + 1 < size && arr[left + 1] > arr[left]) ? left + 1 : left;
//
//            //���׺ͺ���֮��˭��ֵ�󣬰��±��largest
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
//                //�ڶ������У�heapify �������Ǵ�ĳ���ڵ㿪ʼ���µ�����ȷ���Ըýڵ�Ϊ�������������������ʣ����ڵ�ֵ �� �ӽڵ�ֵ����
//                //�������̵Ĺؼ��߼���
//                //�Ƚϵ�ǰ�ڵ㣨index�������ӽڵ�����ӽڵ㣬�ҵ����ֵ���ڵ�λ�ã�largest����
//                //�����ǰ�ڵ��Ѿ������ֵ��ֱ���˳���break����
//                //����ӽڵ����и����ֵ��������ǰ�ڵ�����ֵ���ڽڵ��λ�á�
//                //���µ�ǰ�ڵ�λ�ã�index��Ϊ���ֵ����λ�ã��������µ������ظ����Ϲ��̣�ֱ�������Ķ����ʻָ���
//                //��ֹ������
//                //��ǰ�ڵ��Ѿ��������е����ֵ���˳�������
//                //��ǰ�ڵ�û���ӽڵ㣨left >= size�����˳�ѭ����
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
