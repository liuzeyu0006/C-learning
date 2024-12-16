//����������ĳֵ���ֳ����С���м���ȡ��ұߴ����ʽ
//����Ŀ������һ���������ͷ�ڵ�head���ڵ��ֵ���������ͣ��ٸ���һ����
//��pivot��ʵ��һ����������ĺ��������������Ϊ�󲿷ֶ���ֵС��pivot��
//�ڵ㣬�м䲿�ֶ���ֵ����pivot�Ľڵ㣬�Ҳ��ֶ���ֵ����pivot�Ľڵ㡣
//�����ס���ʵ��ԭ���⹦�ܵĻ������������µ�Ҫ��
//��Ҫ�󡿵���������С��pivot�Ľڵ�֮������˳��͵���ǰһ��
//��Ҫ�󡿵��������е���pivot�Ľڵ�֮������˳��͵���ǰһ��
//��Ҫ�󡿵��������д���pivot�Ľڵ�֮������˳��͵���ǰһ��
//��Ҫ��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ���ﵽO(1)��

//#include <iostream>
//#include <vector>
//
//// ������ڵ㶨��
//struct Node {
//    int value;
//    Node* next;
//
//    Node(int data) : value(data), next(nullptr) {}
//};
//
//// �������
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
//// ʹ������������
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
//// ֱ��ʹ������ڵ�������
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
//    // ����������
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
//// ��ӡ����
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
//    // �ͷ������ڴ�
//    Node* temp;
//    while (head1 != nullptr) {
//        temp = head1->next;
//        delete head1;
//        head1 = temp;
//    }
//
//    return 0;
//}
