////两个单链表相交的一系列问题
////【题目】给定两个可能有环也可能无环的单链表，头节点head1和head2。请实
////现一个函数，如果两个链表相交，请返回相交的 第一个节点。如果不相交，返
////回null
////【要求】如果两个链表长度之和为N，时间复杂度请达到O(N)，额外空间复杂度
////请达到O(1)
//
//#include <iostream>
//#include <cmath>
//
//class Node {
//public:
//    int value;
//    Node* next;
//
//    Node(int val) : value(val), next(nullptr) {}
//};
//
////快指针走两步，慢指针走一步，相遇后，快指针回到head处，同时开始走一步，相遇时就是入环节点
//Node* getLoopNode(Node* head) {
//    if (!head || !head->next || !head->next->next) {
//        return nullptr;
//    }
//    Node* slow = head->next;
//    Node* fast = head->next->next;
//    while (slow != fast) {
//        if (!fast->next || !fast->next->next) {
//            return nullptr;
//        }
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    fast = head;
//    while (slow != fast) {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}
//
////如果两个链表都无环，返回第一个相交的节点，如果不相交，返回null
//Node* noLoop(Node* head1, Node* head2) {
//    if (!head1 || !head2) {
//        return nullptr;
//    }
//    Node* cur1 = head1;
//    Node* cur2 = head2;
//    int n = 0;
//    while (cur1->next) {
//        n++;
//        cur1 = cur1->next;
//    }
//    while (cur2->next) {
//        n--;
//        cur2 = cur2->next;
//    }
//    if (cur1 != cur2) {
//        return nullptr;
//    }
//    //n是链表1长度减去链表2长度的值
//    cur1 = (n > 0) ? head1 : head2;//谁长，谁的头变为cur1
//    cur2 = (cur1 == head1) ? head2 : head1;//谁短，谁的头变为cur2
//    n = std::abs(n);
//    //长链表先走差值步
//    while (n--) {
//        cur1 = cur1->next;
//    }
//    //再一起走
//    while (cur1 != cur2) {
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//    }
//    return cur1;
//}
//
////不存在一个有环，一个无环
//
////两个链表都有环
////1)纯不相交
////2)入环节点相同
////3)入环节点不同
//Node* bothLoop(Node* head1, Node* loop1, Node* head2, Node* loop2) {
//    Node* cur1 = nullptr;
//    Node* cur2 = nullptr;
//    if (loop1 == loop2) {//认为loop1和loop2就是终止节点，情况2入环节点相同
//        cur1 = head1;
//        cur2 = head2;
//        int n = 0;
//        while (cur1 != loop1) {
//            n++;
//            cur1 = cur1->next;
//        }
//        while (cur2 != loop2) {
//            n--;
//            cur2 = cur2->next;
//        }
//        cur1 = (n > 0) ? head1 : head2;
//        cur2 = (cur1 == head1) ? head2 : head1;
//        n = std::abs(n);
//        while (n--) {
//            cur1 = cur1->next;
//        }
//        while (cur1 != cur2) {
//            cur1 = cur1->next;
//            cur2 = cur2->next;
//        }
//        return cur1;
//    }
//    else {//cur1走一圈看看能不能遇到loop2
//        cur1 = loop1->next;
//        while (cur1 != loop1) {
//            if (cur1 == loop2) {
//                return loop1;
//            }
//            cur1 = cur1->next;
//        }
//        return nullptr;
//    }
//}
//
//Node* getIntersectNode(Node* head1, Node* head2) {
//    if (!head1 || !head2) {
//        return nullptr;
//    }
//    Node* loop1 = getLoopNode(head1);
//    Node* loop2 = getLoopNode(head2);
//    if (!loop1 && !loop2) {
//        return noLoop(head1, head2);
//    }
//    if (loop1 && loop2) {
//        return bothLoop(head1, loop1, head2, loop2);
//    }
//    return nullptr;
//}
//
//void freeList(Node* head) {
//    Node* temp;
//    while (head) {
//        temp = head->next;
//        delete head;
//        head = temp;
//    }
//}
//
//void freeLoopList(Node* head, Node* loopNode) {
//    if (!head || !loopNode) return;
//
//    // 释放环外部分
//    Node* start = head;
//    while (head != loopNode) {
//        Node* temp = head->next;
//        delete head;
//        head = temp;
//    }
//
//    // 释放环内部分，确保只释放一圈
//    Node* firstLoopNode = loopNode;
//    do {
//        Node* temp = loopNode->next;
//        delete loopNode;
//        loopNode = temp;
//    } while (loopNode != firstLoopNode);
//}
//
//
//int main() {
//
//        // 测试无环链表相交
//        Node* head1 = new Node(1);
//        head1->next = new Node(2);
//        head1->next->next = new Node(3);
//        head1->next->next->next = new Node(4);
//        head1->next->next->next->next = new Node(5);
//
//        Node* head2 = new Node(6);
//        head2->next = new Node(7);
//        head2->next->next = head1->next->next; // 7->3
//
//        std::cout << "No loop intersect at: ";
//        Node* intersectNode = getIntersectNode(head1, head2);
//        if (intersectNode) std::cout << intersectNode->value << std::endl;
//        else std::cout << "null" << std::endl;
//
//        // 测试无环链表不相交
//        Node* head3 = new Node(8);
//        head3->next = new Node(9);
//        Node* head4 = new Node(10);
//        head4->next = new Node(11);
//
//        std::cout << "No loop no intersect: ";
//        intersectNode = getIntersectNode(head3, head4);
//        if (intersectNode) std::cout << intersectNode->value << std::endl;
//        else std::cout << "null" << std::endl;
//
//        // 测试两个有环链表在环外相交
//        Node* head5 = new Node(12);
//        head5->next = new Node(13);
//        head5->next->next = new Node(14);
//        Node* loopStart1 = new Node(15);
//        head5->next->next->next = loopStart1;
//        loopStart1->next = new Node(16);
//        loopStart1->next->next = new Node(17);
//        loopStart1->next->next->next = loopStart1; // Creating loop
//
//        Node* head6 = new Node(18);
//        head6->next = new Node(19);
//        head6->next->next = head5->next; // 19->13
//
//        std::cout << "Both loop intersect outside loop at: ";
//        intersectNode = getIntersectNode(head5, head6);
//        if (intersectNode) std::cout << intersectNode->value << std::endl;
//        else std::cout << "null" << std::endl;
//
//        // 测试两个有环链表在环内相交但不在同一个入环点
//        Node* head7 = new Node(20);
//        Node* loopStart2 = new Node(21);
//        head7->next = loopStart2;
//        loopStart2->next = new Node(22);
//        loopStart2->next->next = new Node(23);
//        loopStart2->next->next->next = loopStart2; // Creating another loop
//
//        loopStart1->next->next->next = loopStart2->next; // Connecting loops at different points
//
//        std::cout << "Both loop intersect inside loop but different loop points: ";
//        intersectNode = getIntersectNode(head5, head7);
//        if (intersectNode) std::cout << intersectNode->value << std::endl;
//        else std::cout << "null" << std::endl;
//
//        // 测试两个有环链表完全不相交
//        Node* head8 = new Node(24);
//        head8->next = new Node(25);
//        Node* loopStart3 = new Node(26);
//        head8->next->next = loopStart3;
//        loopStart3->next = new Node(27);
//        loopStart3->next->next = loopStart3; // Creating third loop
//
//        std::cout << "Both loop not intersect: ";
//        intersectNode = getIntersectNode(head5, head8);
//        if (intersectNode) std::cout << intersectNode->value << std::endl;
//        else std::cout << "null" << std::endl;
//
//        //// 释放无环链表
//        //freeList(head1);
//        //freeList(head2);
//
//        //// 释放有环链表
//        //freeLoopList(head5, loopStart1);
//        //freeLoopList(head6, loopStart1); // 如果共享环，确保不重复释放
//        //freeLoopList(head7, loopStart2);
//
//        // 注意处理共享环的情况，避免重复释放同一个环中的节点
//        return 0;
//    }
