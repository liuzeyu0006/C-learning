////��һ�����������У��� >= ĳ����������λ��
//#include <iostream>
//#include <vector>
//
//class BinarySearchNearLeft {
//public:
//    // �� arr �ϣ������� >= value ������λ��
//    static int nearestIndex(const std::vector<int>& arr, int value) {
//        int L = 0;
//        int R = arr.size() - 1;
//        int index = -1;
//
//        while (L <= R) { // ע������ӦΪ <=��ȷ����Χ��������
//            int mid = L + ((R - L) >> 1); // �ȼ��� (L + R) / 2
//            if (arr[mid] >= value) {
//                index = mid; // ������������¼��ǰ����������λ��
//                R = mid - 1; // ��������
//            }
//            else {
//                L = mid + 1; // ��������
//            }
//        }
//
//        return index;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 1, 2, 3, 3, 5, 6, 8, 9 }; // ʾ������
//    int value = 3; // ʾ��Ŀ��ֵ
//
//    int index = BinarySearchNearLeft::nearestIndex(arr, value);
//    if (index != -1) {
//        std::cout << "The nearest index with value >= " << value << " is: " << index << std::endl;
//    }
//    else {
//        std::cout << "No element >= " << value << " found in the array." << std::endl;
//    }
//
//    return 0;
//}
