//#include <iostream>
//#include <set>
//#include <map>
//#include <string>
//
//class Node {
//public:
//    int value;
//    Node* next;
//
//    Node(int val) : value(val), next(nullptr) {}
//
//    // 确保Node可以被比较
//    bool operator==(const Node& other) const {
//        return value == other.value;
//    }
//};
//
//// 比较函数，用于set和map
//struct NodeCompare {
//    bool operator()(const Node* a, const Node* b) const {
//        return a->value < b->value;
//    }
//};
//
//int main() {
//    // set with custom comparator
//    std::set<Node*, NodeCompare> treeSet;
//    Node* nodeA = new Node(5);
//    Node* nodeB = new Node(3);
//    Node* nodeC = new Node(7);
//    treeSet.insert(nodeA);
//    treeSet.insert(nodeB);
//    treeSet.insert(nodeC);
//    std::cout << "Nodes added successfully." << std::endl;
//    std::cout << "========5=========" << std::endl;
//
//    // TreeMap equivalent in C++
//    std::map<int, std::string> treeMap1;
//    treeMap1[7] = "我是7";
//    treeMap1[5] = "我是5";
//    treeMap1[4] = "我是4";
//    treeMap1[3] = "我是3";
//    treeMap1[9] = "我是9";
//    treeMap1[2] = "我是2";
//    std::cout << "Contains 5: " << treeMap1.count(5) << std::endl;
//    std::cout << "Value at 5: " << treeMap1[5] << std::endl;
//    std::cout << "First key: " << treeMap1.begin()->first << ", 我最小" << std::endl;
//    std::cout << "Last key: " << (--treeMap1.end())->first << ", 我最大" << std::endl;
//
//    // floorKey and ceilingKey equivalents in C++
//    auto it_lower = treeMap1.lower_bound(8); // >=8
//    auto it_upper = treeMap1.upper_bound(8); // >8
//    if (it_lower != treeMap1.end()) {
//        std::cout << it_lower->first << ", 在表中所有>=8的数中，我离8最近" << std::endl;
//    }
//    else {
//        std::cout << "No element >= 8" << std::endl;
//    }
//
//    // Lower bound for <=8
//    if (it_upper != treeMap1.begin()) {
//        std::cout << (--it_upper)->first << ", 在表中所有<=8的数中，我离8最近" << std::endl;
//    }
//    else {
//        std::cout << "No element <= 8" << std::endl;
//    }
//
//    treeMap1.erase(5);
//    std::cout << "Value at 5: " << (treeMap1.find(5) == treeMap1.end() ? "删了就没有了哦" : treeMap1[5]) << std::endl;
//    std::cout << "========6=========" << std::endl;
//
//    // Clean up nodes
//    delete nodeA;
//    delete nodeB;
//    delete nodeC;
//
//    return 0;
//}
