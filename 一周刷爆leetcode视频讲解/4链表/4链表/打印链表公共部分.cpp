//#include <iostream>
//
//// 单链表节点定义
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// 打印两个有序链表的公共部分
//void printCommonPart(Node* head1, Node* head2) {
//    std::cout << "Common Part: ";
//    while (head1 != nullptr && head2 != nullptr) {
//        if (head1->value < head2->value) {
//            head1 = head1->next;
//        }
//        else if (head1->value > head2->value) {
//            head2 = head2->next;
//        }
//        else {
//            std::cout << head1->value << " ";
//            head1 = head1->next;
//            head2 = head2->next;
//        }
//    }
//    std::cout << std::endl;
//}
//
//// 打印单链表
//void printLinkedList(Node* node) {
//    std::cout << "Linked List: ";
//    while (node != nullptr) {
//        std::cout << node->value << " ";
//        node = node->next;
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    Node* node1 = new Node(2);
//    node1->next = new Node(3);
//    node1->next->next = new Node(5);
//    node1->next->next->next = new Node(6);
//
//    Node* node2 = new Node(1);
//    node2->next = new Node(2);
//    node2->next->next = new Node(5);
//    node2->next->next->next = new Node(7);
//    node2->next->next->next->next = new Node(8);
//
//    printLinkedList(node1);
//    printLinkedList(node2);
//    printCommonPart(node1, node2);
//
//    // Clean up dynamic memory
//    Node* temp;
//    while (node1 != nullptr) {
//        temp = node1->next;
//        delete node1;
//        node1 = temp;
//    }
//    while (node2 != nullptr) {
//        temp = node2->next;
//        delete node2;
//        node2 = temp;
//    }
//
//    return 0;
//}
