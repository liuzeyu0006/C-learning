//#include <iostream>
//#include <unordered_set>
//#include <unordered_map>
//#include <string>
//#include <functional>
//
//class Node {
//public:
//    int value;
//    Node* next;
//
//    Node(int val) : value(val), next(nullptr) {}
//
//    // 相等判断，用于指针
//    bool operator==(const Node& other) const {
//        return value == other.value;
//    }
//};
//
//// 哈希函数，用于指针
//struct NodeHash {
//    std::size_t operator()(const Node* k) const {
//        return std::hash<int>()(k->value);
//    }
//};
//
//// 主函数
//int main() {
//    Node* nodeA = new Node(1);
//    Node* nodeB = new Node(1);
//
//    // 使用指针作为键
//    std::unordered_set<Node*, NodeHash> hashSet;
//    hashSet.insert(nodeA);
//    std::cout << "Contains nodeA: " << (hashSet.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashSet.count(nodeB) > 0) << std::endl; // 应为false
//    hashSet.erase(nodeA);
//    std::cout << "Contains nodeA: " << (hashSet.count(nodeA) > 0) << std::endl;
//    std::cout << "========1=========" << std::endl;
//
//    // 使用指针作为键的 unordered_map
//    std::unordered_map<Node*, std::string, NodeHash> hashMap;
//    hashMap[nodeA] = "A节点";
//    std::cout << "Contains nodeA: " << (hashMap.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashMap.count(nodeB) > 0) << std::endl; // 应为false
//    hashMap[nodeB] = "B节点";
//    std::cout << "Contains nodeB: " << (hashMap.count(nodeB) > 0) << std::endl;
//    std::cout << "========2=========" << std::endl;
//
//    // 使用字符串作为键的unordered_map
//    std::unordered_map<std::string, int> hashMap1;
//    std::string str1 = "key";
//    std::string str2 = "key";
//    hashMap1[str1] = 1;
//    std::cout << "Contains key: " << hashMap1.count(str1) << std::endl;
//    std::cout << "Value at key: " << hashMap1[str1] << std::endl;
//    hashMap1[str2] = 2;
//    std::cout << "Value at key: " << hashMap1[str1] << std::endl;
//    hashMap1.erase(str1);
//    std::cout << "Contains key: " << hashMap1.count(str1) << std::endl;
//    std::cout << "========3=========" << std::endl;
//
//    // 使用Node指针作为键的unordered_map
//    std::unordered_map<Node*, std::string, NodeHash> hashMap2;
//    hashMap2[nodeA] = "A节点";
//    std::cout << "Contains nodeA: " << (hashMap2.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashMap2.count(nodeB) > 0) << std::endl;
//    hashMap2[nodeB] = "B节点";
//    std::cout << "Contains nodeA: " << (hashMap2.count(nodeA) > 0) << std::endl;
//    std::cout << "========4=========" << std::endl;
//
//    // 释放动态分配的节点
//    delete nodeA;
//    delete nodeB;
//
//    return 0;
//}
