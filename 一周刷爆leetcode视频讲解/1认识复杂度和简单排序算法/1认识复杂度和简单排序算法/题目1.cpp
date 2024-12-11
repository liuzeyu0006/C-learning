//#include <iostream>
//#include <vector>
//
////一个数组中有一种数出现了奇数次，其他数都出现了偶数次，怎么找到这一个数
//
//class EvenTimesOddTimes {
//public:
//    static void printOddTimesNum1(const std::vector<int>& arr) {
//        int eor = 0;
//        for (int cur : arr) {
//            eor ^= cur;
//        }
//        std::cout << eor << std::endl;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 1, 2, 3, 2, 3, 1, 1 }; // 示例输入，奇数次出现的数字是 1
//    EvenTimesOddTimes::printOddTimesNum1(arr);
//    return 0;
//}
