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
//    // ����жϣ�����ָ��
//    bool operator==(const Node& other) const {
//        return value == other.value;
//    }
//};
//
//// ��ϣ����������ָ��
//struct NodeHash {
//    std::size_t operator()(const Node* k) const {
//        return std::hash<int>()(k->value);
//    }
//};
//
//// ������
//int main() {
//    Node* nodeA = new Node(1);
//    Node* nodeB = new Node(1);
//
//    // ʹ��ָ����Ϊ��
//    std::unordered_set<Node*, NodeHash> hashSet;
//    hashSet.insert(nodeA);
//    std::cout << "Contains nodeA: " << (hashSet.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashSet.count(nodeB) > 0) << std::endl; // ӦΪfalse
//    hashSet.erase(nodeA);
//    std::cout << "Contains nodeA: " << (hashSet.count(nodeA) > 0) << std::endl;
//    std::cout << "========1=========" << std::endl;
//
//    // ʹ��ָ����Ϊ���� unordered_map
//    std::unordered_map<Node*, std::string, NodeHash> hashMap;
//    hashMap[nodeA] = "A�ڵ�";
//    std::cout << "Contains nodeA: " << (hashMap.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashMap.count(nodeB) > 0) << std::endl; // ӦΪfalse
//    hashMap[nodeB] = "B�ڵ�";
//    std::cout << "Contains nodeB: " << (hashMap.count(nodeB) > 0) << std::endl;
//    std::cout << "========2=========" << std::endl;
//
//    // ʹ���ַ�����Ϊ����unordered_map
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
//    // ʹ��Nodeָ����Ϊ����unordered_map
//    std::unordered_map<Node*, std::string, NodeHash> hashMap2;
//    hashMap2[nodeA] = "A�ڵ�";
//    std::cout << "Contains nodeA: " << (hashMap2.count(nodeA) > 0) << std::endl;
//    std::cout << "Contains nodeB: " << (hashMap2.count(nodeB) > 0) << std::endl;
//    hashMap2[nodeB] = "B�ڵ�";
//    std::cout << "Contains nodeA: " << (hashMap2.count(nodeA) > 0) << std::endl;
//    std::cout << "========4=========" << std::endl;
//
//    // �ͷŶ�̬����Ľڵ�
//    delete nodeA;
//    delete nodeB;
//
//    return 0;
//}
