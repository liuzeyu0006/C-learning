////		1
////	 2	   3
//// 4   5  6  7
////经过1,2,4,4,4,2,5,5,5,2,1,3,6,6,6,3,7,7,7,3,1，递归序每个数都会调用三次
//
////先序遍历：头、左、右 1,2,4,5,3,6,7  由递归序转化而来，第一次到就打印，2、3次的不打印
////中序遍历：左、头、右 4,2,5,1,6,3,7  由递归序转化而来，第二次到就打印，1、3次的不打印
////后序遍历：左、右、头 4,5,2,6,7,3,1  由递归序转化而来，第三次到就打印，1、2次的不打印
//
//#include <iostream>
//#include <stack>
//
//struct Node {
//    int value;
//    Node* left;
//    Node* right;
//
//    Node(int val) : value(val), left(nullptr), right(nullptr) {}
//};
//
//void preOrderRecur(Node* head) {
//    if (head == nullptr) {
//        return;
//    }
//    std::cout << head->value << " ";
//    preOrderRecur(head->left);
//    preOrderRecur(head->right);
//}
//
//void inOrderRecur(Node* head) {
//    if (head == nullptr) {
//        return;
//    }
//    inOrderRecur(head->left);
//    std::cout << head->value << " ";
//    inOrderRecur(head->right);
//}
//
//void posOrderRecur(Node* head) {
//    if (head == nullptr) {
//        return;
//    }
//    posOrderRecur(head->left);
//    posOrderRecur(head->right);
//    std::cout << head->value << " ";
//}
//
////非递归先序遍历
////1、从栈中弹出一个节点
////2、打印（处理）
////3、先右再左
////4、重复
//void preOrderUnRecur(Node* head) {
//    std::cout << "pre-order: ";
//    if (head != nullptr) {
//        std::stack<Node*> stack;
//        stack.push(head);
//        while (!stack.empty()) {
//            head = stack.top();
//            stack.pop();
//            std::cout << head->value << " ";
//            if (head->right != nullptr) {
//                stack.push(head->right);
//            }
//            if (head->left != nullptr) {
//                stack.push(head->left);
//            }
//        }
//    }
//    std::cout << std::endl;
//}
//
////非递归中序遍历
////1、每颗子树的整棵树的左边界进栈
////2、以此弹得过程打印（处理）
////3、对弹出的节点右树处理
////4、重复
////左       头        右
////             （右分解为左头右）   持续把右分解为左头
//
////124进栈，弹4无右，弹2有右5，5进栈，弹5无右，继续弹1.36进栈，弹6无右，弹3有右7，7进栈，弹7
////4,2,5,1,6,3,7
//void inOrderUnRecur(Node* head) {
//    std::cout << "in-order: ";
//    if (head != nullptr) {
//        std::stack<Node*> stack;
//        while (!stack.empty() || head != nullptr) {
//            if (head != nullptr) {//全部左边界进栈
//                stack.push(head);
//                head = head->left;
//            }
//            else {
//                head = stack.top();
//                stack.pop();
//                std::cout << head->value << " ";
//                head = head->right;//往右动继续搞左边界
//            }
//        }
//    }
//    std::cout << std::endl;
//}
//
//
////非递归后序遍历：左右头
////1、从栈中弹出一个节点
////2、放入收栈中
////3、先左再右
////4、重复
//void posOrderUnRecur1(Node* head) {
//    std::cout << "pos-order: ";
//    if (head != nullptr) {
//        std::stack<Node*> s1, s2;
//        s1.push(head);
//        while (!s1.empty()) {
//            head = s1.top();
//            s1.pop();
//            s2.push(head);
//            if (head->left != nullptr) {
//                s1.push(head->left);
//            }
//            if (head->right != nullptr) {
//                s1.push(head->right);
//            }
//        }
//        while (!s2.empty()) {
//            std::cout << s2.top()->value << " ";
//            s2.pop();
//        }
//    }
//    std::cout << std::endl;
//}
//
//void posOrderUnRecur2(Node* head) {
//    std::cout << "pos-order: ";
//    if (head != nullptr) {
//        std::stack<Node*> stack;
//        stack.push(head);
//        Node* c = nullptr;
//        while (!stack.empty()) {
//            c = stack.top();  // 正确使用 top() 获取栈顶元素
//            if (c->left != nullptr && head != c->left && head != c->right) {
//                stack.push(c->left);
//            }
//            else if (c->right != nullptr && head != c->right) {
//                stack.push(c->right);
//            }
//            else {
//                std::cout << c->value << " ";  // 先输出节点值
//                stack.pop();  // 然后使用 pop() 移除栈顶元素
//                head = c;
//            }
//        }
//    }
//    std::cout << std::endl;
//}
//
//
//
//int main() {
//    Node* root = new Node(5);
//    root->left = new Node(3);
//    root->right = new Node(8);
//    root->left->left = new Node(2);
//    root->left->right = new Node(4);
//    root->left->left->left = new Node(1);
//    root->right->left = new Node(7);
//    root->right->left->left = new Node(6);
//    root->right->right = new Node(10);
//    root->right->right->left = new Node(9);
//    root->right->right->right = new Node(11);
//
//    std::cout << "==============recursive==============" << std::endl;
//    std::cout << "pre-order: ";
//    preOrderRecur(root);
//    std::cout << std::endl;
//    std::cout << "in-order: ";
//    inOrderRecur(root);
//    std::cout << std::endl;
//    std::cout << "pos-order: ";
//    posOrderRecur(root);
//    std::cout << std::endl;
//
//    std::cout << "============unrecursive=============" << std::endl;
//    preOrderUnRecur(root);
//    inOrderUnRecur(root);
//    posOrderUnRecur1(root);
//    posOrderUnRecur2(root);
//
//    // Clean up
//    // Free the tree nodes here to prevent memory leaks
//}
