//判断一个链表是否为回文结构
//【题目】给定一个单链表的头节点head，请判断该链表是否为回文结构。
//【例子】1->2->1，返回true； 1->2->2->1，返回true；15->6->15，返回true；
//1->2->3，返回false。
//【例子】如果链表长度为N，时间复杂度达到O(N)，额外空间复杂度达到O(1)。

//#include <iostream>
//#include <stack>
//
//// 单链表节点定义
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// 使用完整栈来检查是否为回文
//bool isPalindrome1(Node* head) {
//    std::stack<Node*> stack;
//    Node* cur = head;
//    while (cur != nullptr) {
//        stack.push(cur);
//        cur = cur->next;
//    }
//    while (head != nullptr) {
//        if (head->value != stack.top()->value) {
//            return false;
//        }
//        stack.pop();
//        head = head->next;
//    }
//    return true;
//}
//
//// 使用半栈来检查是否为回文
//bool isPalindrome2(Node* head) {
//    if (head == nullptr || head->next == nullptr) {
//        return true;
//    }
//    //注意快慢指针的定制问题，根据题目要求来，当快指针到头，慢指针正好走一半还是一半前一个？或者后一个？
//    Node* slow = head;
//    Node* fast = head;
//    while (fast->next != nullptr && fast->next->next != nullptr) {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    std::stack<Node*> stack;
//    Node* cur = slow->next;
//    while (cur != nullptr) {
//        stack.push(cur);
//        cur = cur->next;
//    }
//    while (!stack.empty()) {
//        if (head->value != stack.top()->value) {
//            return false;
//        }
//        stack.pop();
//        head = head->next;
//    }
//    return true;
//}
//
//// 使用原地反转来检查是否为回文
//bool isPalindrome3(Node* head) {
//    if (head == nullptr || head->next == nullptr) {
//        return true;
//    }
//    Node* slow = head;
//    Node* fast = head;
//    while (fast->next != nullptr && fast->next->next != nullptr) {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    Node* prev = nullptr;
//    Node* cur = slow->next;
//    while (cur != nullptr) {
//        Node* next = cur->next;
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//    }
//    Node* tail = prev;
//    bool result = true;
//    while (tail != nullptr) {
//        if (tail->value != head->value) {
//            result = false;
//            break;
//        }
//        tail = tail->next;
//        head = head->next;
//    }
//    // Recover the list
//    prev = nullptr;
//    cur = tail;
//    while (cur != nullptr) {
//        Node* next = cur->next;
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//    }
//    return result;
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
//
//        // 创建并测试链表
//        Node* head1 = new Node(1);
//        head1->next = new Node(2);
//        head1->next->next = new Node(3);
//        head1->next->next->next = new Node(2);
//        head1->next->next->next->next = new Node(1);
//
//        printLinkedList(head1);
//        std::cout << "Is Palindrome (Full Stack): " << isPalindrome1(head1) << std::endl;
//        std::cout << "Is Palindrome (Half Stack): " << isPalindrome2(head1) << std::endl;
//        std::cout << "Is Palindrome (In-place): " << isPalindrome3(head1) << std::endl;
//
//        // 释放链表内存
//        Node* current = head1;
//        Node* next = nullptr;
//        while (current != nullptr) {
//            next = current->next;
//            delete current;
//            current = next;
//        }
//
//        return 0;
//    }
