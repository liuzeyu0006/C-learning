//#include <iostream>
//#include <string>
//#include <sstream>
//
//struct Node {
//    int value;
//    Node* left;
//    Node* right;
//
//    Node(int val) : value(val), left(nullptr), right(nullptr) {}
//};
//
//std::string getSpace(int num) {
//    std::string space = " ";
//    std::ostringstream buf;
//    for (int i = 0; i < num; i++) {
//        buf << space;
//    }
//    return buf.str();
//}
//
//void printInOrder(Node* head, int height, std::string to, int len) {
//    if (head == nullptr) {
//        return;
//    }
//    printInOrder(head->right, height + 1, "v", len);
//    std::string val = to + std::to_string(head->value) + to;
//    int lenM = val.length();
//    int lenL = (len - lenM) / 2;
//    int lenR = len - lenM - lenL;
//    val = getSpace(lenL) + val + getSpace(lenR);
//    std::cout << getSpace(height * len) << val << std::endl;
//    printInOrder(head->left, height + 1, "^", len);
//}
//
//void printTree(Node* head) {
//    std::cout << "Binary Tree:" << std::endl;
//    printInOrder(head, 0, "H", 17);
//    std::cout << std::endl;
//}
//
//int main() {
//    Node* head = new Node(1);
//    head->left = new Node(-222222222);
//    head->right = new Node(3);
//    head->left->left = new Node(INT_MIN);
//    head->right->left = new Node(55555555);
//    head->right->right = new Node(66);
//    head->left->left->right = new Node(777);
//    printTree(head);
//
//    head = new Node(1);
//    head->left = new Node(2);
//    head->right = new Node(3);
//    head->left->left = new Node(4);
//    head->right->left = new Node(5);
//    head->right->right = new Node(6);
//    head->left->left->right = new Node(7);
//    printTree(head);
//
//    head = new Node(1);
//    head->left = new Node(1);
//    head->right = new Node(1);
//    head->left->left = new Node(1);
//    head->right->left = new Node(1);
//    head->right->right = new Node(1);
//    head->left->left->right = new Node(1);
//    printTree(head);
//
//    // Clean up
//    // You should add a delete tree function here to properly free memory.
//    // Remember, managing memory manually in C++ is crucial to avoid memory leaks.
//}
//
