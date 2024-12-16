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
//// 反转单链表
//Node* reverseList(Node* head) {
//    Node* pre = nullptr;
//    Node* next = nullptr;
//    while (head != nullptr) { // 修改从 "head != null" 为 "head != nullptr"
//        next = head->next;
//        head->next = pre;
//        pre = head;
//        head = next;
//    }
//    return pre;
//}
//
//// 打印单链表
//void printLinkedList(Node* head) {
//    std::cout << "Linked List: ";
//    while (head != nullptr) {
//        std::cout << head->value << " ";
//        head = head->next;
//    }
//    std::cout << std::endl;
//}
//
//// 双链表节点定义
//struct DoubleNode {
//    int value;
//    DoubleNode* last;
//    DoubleNode* next;
//
//    DoubleNode(int data) : value(data), last(nullptr), next(nullptr) {}
//};
//
//// 反转双链表
//DoubleNode* reverseList(DoubleNode* head) {
//    DoubleNode* pre = nullptr;
//    DoubleNode* next = nullptr;
//    while (head != nullptr) {
//        next = head->next;
//        head->next = pre;
//        head->last = next;
//        pre = head;
//        head = next;
//    }
//    return pre;
//}
//
//// 打印双链表
//void printDoubleLinkedList(DoubleNode* head) {
//    std::cout << "Double Linked List: ";
//    DoubleNode* end = nullptr;
//    while (head != nullptr) {
//        std::cout << head->value << " ";
//        end = head;
//        head = head->next;
//    }
//    std::cout << "| ";
//    while (end != nullptr) {
//        std::cout << end->value << " ";
//        end = end->last;
//    }
//    std::cout << std::endl;
//}
//
//// 释放单链表
//void freeLinkedList(Node* head) {
//    Node* next;
//    while (head != nullptr) {
//        next = head->next;
//        delete head;
//        head = next;
//    }
//}
//
//// 释放双链表
//void freeDoubleLinkedList(DoubleNode* head) {
//    DoubleNode* next;
//    while (head != nullptr) {
//        next = head->next;
//        delete head;
//        head = next;
//    }
//}
//
//int main() {
//    Node* head1 = new Node(1);
//    head1->next = new Node(2);
//    head1->next->next = new Node(3);
//    printLinkedList(head1);
//    head1 = reverseList(head1);
//    printLinkedList(head1);
//    freeLinkedList(head1);
//
//    DoubleNode* head2 = new DoubleNode(1);
//    head2->next = new DoubleNode(2);
//    head2->next->last = head2;
//    head2->next->next = new DoubleNode(3);
//    head2->next->next->last = head2->next;
//    head2->next->next->next = new DoubleNode(4);
//    head2->next->next->next->last = head2->next->next;
//    printDoubleLinkedList(head2);
//    head2 = reverseList(head2);
//    printDoubleLinkedList(head2);
//    freeDoubleLinkedList(head2);
//
//    return 0;
//}
