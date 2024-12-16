//#include <iostream>
//
//// ������ڵ㶨��
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// ��ת������
//Node* reverseList(Node* head) {
//    Node* pre = nullptr;
//    Node* next = nullptr;
//    while (head != nullptr) { // �޸Ĵ� "head != null" Ϊ "head != nullptr"
//        next = head->next;
//        head->next = pre;
//        pre = head;
//        head = next;
//    }
//    return pre;
//}
//
//// ��ӡ������
//void printLinkedList(Node* head) {
//    std::cout << "Linked List: ";
//    while (head != nullptr) {
//        std::cout << head->value << " ";
//        head = head->next;
//    }
//    std::cout << std::endl;
//}
//
//// ˫����ڵ㶨��
//struct DoubleNode {
//    int value;
//    DoubleNode* last;
//    DoubleNode* next;
//
//    DoubleNode(int data) : value(data), last(nullptr), next(nullptr) {}
//};
//
//// ��ת˫����
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
//// ��ӡ˫����
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
//// �ͷŵ�����
//void freeLinkedList(Node* head) {
//    Node* next;
//    while (head != nullptr) {
//        next = head->next;
//        delete head;
//        head = next;
//    }
//}
//
//// �ͷ�˫����
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
