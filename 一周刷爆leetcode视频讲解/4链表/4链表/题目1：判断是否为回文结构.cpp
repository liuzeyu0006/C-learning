//�ж�һ�������Ƿ�Ϊ���Ľṹ
//����Ŀ������һ���������ͷ�ڵ�head�����жϸ������Ƿ�Ϊ���Ľṹ��
//�����ӡ�1->2->1������true�� 1->2->2->1������true��15->6->15������true��
//1->2->3������false��
//�����ӡ����������ΪN��ʱ�临�ӶȴﵽO(N)������ռ临�ӶȴﵽO(1)��

//#include <iostream>
//#include <stack>
//
//// ������ڵ㶨��
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// ʹ������ջ������Ƿ�Ϊ����
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
//// ʹ�ð�ջ������Ƿ�Ϊ����
//bool isPalindrome2(Node* head) {
//    if (head == nullptr || head->next == nullptr) {
//        return true;
//    }
//    //ע�����ָ��Ķ������⣬������ĿҪ����������ָ�뵽ͷ����ָ��������һ�뻹��һ��ǰһ�������ߺ�һ����
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
//// ʹ��ԭ�ط�ת������Ƿ�Ϊ����
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
//// ��ӡ������
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
//        // ��������������
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
//        // �ͷ������ڴ�
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
