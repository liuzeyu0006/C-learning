////�����������ཻ��һϵ������
////����Ŀ���������������л�Ҳ�����޻��ĵ�����ͷ�ڵ�head1��head2����ʵ
////��һ��������������������ཻ���뷵���ཻ�� ��һ���ڵ㡣������ཻ����
////��null
////��Ҫ���������������֮��ΪN��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ�
////��ﵽO(1)
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
////��ָ������������ָ����һ���������󣬿�ָ��ص�head����ͬʱ��ʼ��һ��������ʱ�����뻷�ڵ�
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
////������������޻������ص�һ���ཻ�Ľڵ㣬������ཻ������null
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
//    //n������1���ȼ�ȥ����2���ȵ�ֵ
//    cur1 = (n > 0) ? head1 : head2;//˭����˭��ͷ��Ϊcur1
//    cur2 = (cur1 == head1) ? head2 : head1;//˭�̣�˭��ͷ��Ϊcur2
//    n = std::abs(n);
//    //���������߲�ֵ��
//    while (n--) {
//        cur1 = cur1->next;
//    }
//    //��һ����
//    while (cur1 != cur2) {
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//    }
//    return cur1;
//}
//
////������һ���л���һ���޻�
//
////���������л�
////1)�����ཻ
////2)�뻷�ڵ���ͬ
////3)�뻷�ڵ㲻ͬ
//Node* bothLoop(Node* head1, Node* loop1, Node* head2, Node* loop2) {
//    Node* cur1 = nullptr;
//    Node* cur2 = nullptr;
//    if (loop1 == loop2) {//��Ϊloop1��loop2������ֹ�ڵ㣬���2�뻷�ڵ���ͬ
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
//    else {//cur1��һȦ�����ܲ�������loop2
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
//    // �ͷŻ��ⲿ��
//    Node* start = head;
//    while (head != loopNode) {
//        Node* temp = head->next;
//        delete head;
//        head = temp;
//    }
//
//    // �ͷŻ��ڲ��֣�ȷ��ֻ�ͷ�һȦ
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
//        // �����޻������ཻ
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
//        // �����޻������ཻ
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
//        // ���������л������ڻ����ཻ
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
//        // ���������л������ڻ����ཻ������ͬһ���뻷��
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
//        // ���������л�������ȫ���ཻ
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
//        //// �ͷ��޻�����
//        //freeList(head1);
//        //freeList(head2);
//
//        //// �ͷ��л�����
//        //freeLoopList(head5, loopStart1);
//        //freeLoopList(head6, loopStart1); // ���������ȷ�����ظ��ͷ�
//        //freeLoopList(head7, loopStart2);
//
//        // ע�⴦����������������ظ��ͷ�ͬһ�����еĽڵ�
//        return 0;
//    }
