//#include <iostream>
//#include <vector>
//
////一个数组中有两种数出现了奇数次，其他数都出现了偶数次，怎么找到这两个数
//class OddTimesNumbers {
//public:
//    static void printOddTimesNum2(const std::vector<int>& arr) {
//        int eor = 0;
//        int eOhasOne = 0;
//
//        // Step 1: XOR all numbers to get eO (combined result of two odd times numbers)
//        for (int curNum : arr) {
//            eor ^= curNum;
//        }
//
// /*       eor=a^b
//            eor!=0
//            eor必然有一个位置上为1*/
//
//
//        // Step 2: Get the rightmost set bit of eO
//        int rightOne = eor & (~eor +1);
//
//        // Step 3: XOR the numbers that have the rightmost bit set
//        for (int cur : arr) {
//            if ((cur & rightOne) != 0) {
//                eOhasOne ^= cur;
//            }
//        }
//
//        // Print the two odd times numbers
//        std::cout << eOhasOne << " " << (eO ^ eOhasOne) << std::endl;
//    }
//};
//
//int main() {
//    std::vector<int> arr = { 1, 2, 3, 2, 3, 1, 5, 7 }; // Example input
//    OddTimesNumbers::printOddTimesNum2(arr); // Output: Two numbers appearing odd times
//    return 0;
//}
