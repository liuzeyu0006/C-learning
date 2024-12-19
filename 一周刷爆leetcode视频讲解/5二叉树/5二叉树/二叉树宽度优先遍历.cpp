//#include <iostream>
//#include <queue>
//
//struct Node {
//    int value;
//    Node* left;
//    Node* right;
//
//    Node(int val) : value(val), left(nullptr), right(nullptr) {}
//};
//
//void widthTraversal(Node* head) {
//    if (head == nullptr) {
//        return;
//    }
//    std::queue<Node*> queue;
//    queue.push(head);
//
//    while (!queue.empty()) {
//        Node* cur = queue.front();
//        queue.pop();
//        std::cout << cur->value << " ";
//
//        if (cur->left != nullptr) {
//            queue.push(cur->left);
//        }
//        if (cur->right != nullptr) {
//            queue.push(cur->right);
//        }
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    std::cout << "Width-first traversal of binary tree: ";
//    widthTraversal(root);
//
//    // Clean up
//    // You should add a delete tree function here to properly free memory.
//}
//
