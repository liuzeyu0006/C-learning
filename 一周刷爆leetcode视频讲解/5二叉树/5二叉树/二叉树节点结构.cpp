////		1
////	 2	   3
//// 4   5  6  7
////����1,2,4,4,4,2,5,5,5,2,1,3,6,6,6,3,7,7,7,3,1���ݹ���ÿ���������������
//
////���������ͷ������ 1,2,4,5,3,6,7  �ɵݹ���ת����������һ�ε��ʹ�ӡ��2��3�εĲ���ӡ
////�����������ͷ���� 4,2,5,1,6,3,7  �ɵݹ���ת���������ڶ��ε��ʹ�ӡ��1��3�εĲ���ӡ
////������������ҡ�ͷ 4,5,2,6,7,3,1  �ɵݹ���ת�������������ε��ʹ�ӡ��1��2�εĲ���ӡ
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
////�ǵݹ��������
////1����ջ�е���һ���ڵ�
////2����ӡ������
////3����������
////4���ظ�
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
////�ǵݹ��������
////1��ÿ������������������߽��ջ
////2���Դ˵��ù��̴�ӡ������
////3���Ե����Ľڵ���������
////4���ظ�
////��       ͷ        ��
////             ���ҷֽ�Ϊ��ͷ�ң�   �������ҷֽ�Ϊ��ͷ
//
////124��ջ����4���ң���2����5��5��ջ����5���ң�������1.36��ջ����6���ң���3����7��7��ջ����7
////4,2,5,1,6,3,7
//void inOrderUnRecur(Node* head) {
//    std::cout << "in-order: ";
//    if (head != nullptr) {
//        std::stack<Node*> stack;
//        while (!stack.empty() || head != nullptr) {
//            if (head != nullptr) {//ȫ����߽��ջ
//                stack.push(head);
//                head = head->left;
//            }
//            else {
//                head = stack.top();
//                stack.pop();
//                std::cout << head->value << " ";
//                head = head->right;//���Ҷ���������߽�
//            }
//        }
//    }
//    std::cout << std::endl;
//}
//
//
////�ǵݹ�������������ͷ
////1����ջ�е���һ���ڵ�
////2��������ջ��
////3����������
////4���ظ�
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
//            c = stack.top();  // ��ȷʹ�� top() ��ȡջ��Ԫ��
//            if (c->left != nullptr && head != c->left && head != c->right) {
//                stack.push(c->left);
//            }
//            else if (c->right != nullptr && head != c->right) {
//                stack.push(c->right);
//            }
//            else {
//                std::cout << c->value << " ";  // ������ڵ�ֵ
//                stack.pop();  // Ȼ��ʹ�� pop() �Ƴ�ջ��Ԫ��
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
