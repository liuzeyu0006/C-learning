//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////ѡ������
//class SelectionSort {
//public:
//    //�����У�static ������
//    //    �����У�static �������γ�Ա�������Ա��������Ҫ������ʹ���Ϊ��̬��Ա����̬��Ա�����������ԣ�
//    //    �����������������������
//    //    ��̬��Ա�����;�̬��Ա�����������౾��ģ��������������ĳ������
//    //    ����ζ�ţ���ʹû�д����κζ���Ҳ����ͨ������ֱ�ӷ��ʾ�̬��Ա��
//    //    �����ԣ�
//    //    ��̬��Ա�����ж���֮�乲������ÿ��������һ�ݵ����Ŀ�����
//    //    �Ծ�̬��Ա�������޸Ļ�Ӱ�����ж���
//    //    ��̬��Ա�������ص㣺
//    //    ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����̬������������̬������������ֱ�ӷ��ʷǾ�̬��Ա��
//    //    ԭ���ǷǾ�̬��Ա���ھ���Ķ��󣬶���̬��Ա�����������κζ���
//
//    //��̬�汾���Ӽ�ࣺ���贴������ʵ��������ֱ��ͨ���������á�
//    static void selectionSort(std::vector<int>& arr) {
//        if (arr.empty() || arr.size() < 2) {
//            return;
//        }
//        //ʹ��size_t������int��ԭ��
//        //size_t ���޷����������ͣ����������������ʹ�С
//        //�� 64 λϵͳ�У�size_t ͨ��Ϊ 64 λ���ܹ���ʾ�����ֵ��Χ���� int ͨ��Ϊ 32 λ��
//        //C++ ��׼ģ��⣨STL������������ std::vector��std::string��std::map �ȣ��� size() �����ķ���ֵ�� size_t��
// 
//        ���-1����Ϊ���һ��Ԫ���Ѿ�����ȷλ��
//        for (size_t i = 0; i < arr.size() - 1; i++) {
//            size_t minIndex = i;
//            for (size_t j = i + 1; j < arr.size(); j++) {
//                if (arr[j] < arr[minIndex]) {
//                    minIndex = j;
//                }
//            }
//            swap(arr, i, minIndex);
//        }
//    }
//
//private:
//    static void swap(std::vector<int>& arr, size_t i, size_t j) {
//        int tmp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = tmp;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 64, 25, 12, 22, 11 };
//    SelectionSort::selectionSort(arr);
//
//    std::cout << "Sorted array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    //�ȼ۴�����
//    //for (auto it = arr.begin(); it != arr.end(); ++it) {
//    //    int num = *it; // ��ȡ��ǰԪ��
//    //    std::cout << num << " ";
//    //}
//
//    return 0;
//}
