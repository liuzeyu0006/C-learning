//将单向链表按某值划分成左边小、中间相等、右边大的形式
//【题目】给定一个单链表的头节点head，节点的值类型是整型，再给定一个整
//数pivot。实现一个调整链表的函数，将链表调整为左部分都是值小于pivot的
//节点，中间部分都是值等于pivot的节点，右部分都是值大于pivot的节点。
//【进阶】在实现原问题功能的基础上增加如下的要求
//【要求】调整后所有小于pivot的节点之间的相对顺序和调整前一样
//【要求】调整后所有等于pivot的节点之间的相对顺序和调整前一样
//【要求】调整后所有大于pivot的节点之间的相对顺序和调整前一样
//【要求】时间复杂度请达到O(N)，额外空间复杂度请达到O(1)。

//#include <iostream>
//#include <vector>
//
//// 单链表节点定义
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// 数组分区
//void arrPartition(std::vector<Node*>& nodeArr, int pivot) {
//    int small = -1;
//    int big = nodeArr.size();
//    int index = 0;
//    while (index != big) {
//        if (nodeArr[index]->value < pivot) {
//            std::swap(nodeArr[++small], nodeArr[index++]);
//        }
//        else if (nodeArr[index]->value == pivot) {
//            index++;
//        }
//        else {
//            std::swap(nodeArr[--big], nodeArr[index]);
//        }
//    }
//}
//
//// 使用数组来分区
//Node* listPartition1(Node* head, int pivot) {
//    if (head == nullptr) {
//        return head;
//    }
//    std::vector<Node*> nodeArr;
//    Node* cur = head;
//    while (cur != nullptr) {
//        nodeArr.push_back(cur);
//        cur = cur->next;
//    }
//    arrPartition(nodeArr, pivot);
//    for (size_t i = 1; i < nodeArr.size(); i++) {
//        nodeArr[i - 1]->next = nodeArr[i];
//    }
//    nodeArr.back()->next = nullptr;
//    return nodeArr.front();
//}
//
//// 直接使用链表节点来分区
//Node* listPartition2(Node* head, int pivot) {
//    Node* sH = nullptr; // small head
//    Node* sT = nullptr; // small tail
//    Node* eH = nullptr; // equal head
//    Node* eT = nullptr; // equal tail
//    Node* bH = nullptr; // big head
//    Node* bT = nullptr; // big tail
//    Node* next = nullptr; // save next node
//
//    while (head != nullptr) {
//        next = head->next;
//        head->next = nullptr;
//        if (head->value < pivot) {
//            if (sH == nullptr) {
//                sH = sT = head;
//            }
//            else {
//                sT = sT->next = head;
//            }
//        }
//        else if (head->value == pivot) {
//            if (eH == nullptr) {
//                eH = eT = head;
//            }
//            else {
//                eT = eT->next = head;
//            }
//        }
//        else {
//            if (bH == nullptr) {
//                bH = bT = head;
//            }
//            else {
//                bT = bT->next = head;
//            }
//        }
//        head = next;
//    }
//
//    // 连接三部分
//    if (sT != nullptr) {
//        sT->next = eH;
//        eT = (eT == nullptr) ? sT : eT;
//    }
//    if (eT != nullptr) {
//        eT->next = bH;
//    }
//    return (sH != nullptr) ? sH : (eH != nullptr) ? eH : bH;
//}
//
//// 打印链表
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
//    Node* head1 = new Node(7);
//    head1->next = new Node(9);
//    head1->next->next = new Node(1);
//    head1->next->next->next = new Node(8);
//    head1->next->next->next->next = new Node(5);
//    head1->next->next->next->next->next = new Node(2);
//    head1->next->next->next->next->next->next = new Node(5);
//
//    printLinkedList(head1);
//    head1 = listPartition2(head1, 5);
//    printLinkedList(head1);
//
//    // 释放链表内存
//    Node* temp;
//    while (head1 != nullptr) {
//        temp = head1->next;
//        delete head1;
//        head1 = temp;
//    }
//
//    return 0;
//}
