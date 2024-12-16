//����Ŀ��һ������ĵ�����ڵ�����������
//class Node {
//	int value;
//	Node next;
//	Node rand;
//	Node(int val) {
//		value = val;
//	}
//}
//randָ���ǵ�����ڵ�ṹ��������ָ�룬rand����ָ�������е�����һ����
//�㣬Ҳ����ָ��null������һ����Node�ڵ�������ɵ��޻��������ͷ�ڵ�
//head����ʵ��һ����������������ĸ��ƣ������ظ��Ƶ��������ͷ�ڵ㡣
//��Ҫ��ʱ�临�Ӷ�O(N)������ռ临�Ӷ�O(1)

#include <iostream>
#include <unordered_map>
#include <sstream>  



// ����ڵ㶨�壬����next��randָ��
struct Node {
    int value;
    Node* next;
    Node* rand;

    Node(int data) : value(data), next(nullptr), rand(nullptr) {}
};

// ʹ�ù�ϣ��������
Node* copyListWithRand1(Node* head) {
    std::unordered_map<Node*, Node*> map;
    Node* cur = head;
    while (cur != nullptr) {
        map[cur] = new Node(cur->value);
        cur = cur->next;
    }
    cur = head;
    while (cur != nullptr) {
        map[cur]->next = map[cur->next];
        map[cur]->rand = map[cur->rand];
        cur = cur->next;
    }
    return map[head];
}

// ��ʹ�ö���ռ临������
Node* copyListWithRand2(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* cur = head;
    Node* next = nullptr;
    // ��һ��������ÿ���ڵ㣬�������ƵĽڵ���뵽ԭ�ڵ�ĺ���
    while (cur != nullptr) {
        next = cur->next;
        Node* copy = new Node(cur->value);
        cur->next = copy;
        copy->next = next;
        cur = next;
    }
    cur = head;
    // �ڶ��������ø��ƽڵ��randָ��
    while (cur != nullptr) {
        if (cur->rand != nullptr) {
            cur->next->rand = cur->rand->next;
        }
        cur = cur->next->next;
    }
    // ������������ԭ����͸�������
    Node* res = head->next;
    cur = head;
    Node* copy = nullptr;
    while (cur != nullptr) {
        next = cur->next->next;
        copy = cur->next;
        cur->next = next;
        if (next != nullptr) {
            copy->next = next->next;
        }
        cur = next;
    }
    return res;
}

std::string toString(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

// ��ӡ�����randָ��
void printRandLinkedList(Node* head) {
    Node* cur = head;
    std::cout << "order: ";
    while (cur != nullptr) {
        std::cout << cur->value << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
    cur = head;
    std::cout << "rand:  ";
    while (cur != nullptr) {
        std::cout << (cur->rand == nullptr ? "- " : toString(cur->rand->value) + " ");
        cur = cur->next;
    }
    std::cout << std::endl;
}

void freeList(Node* head) {
    Node* next;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    head->rand = head->next->next->next->next->next; // 1 -> 6
    head->next->rand = head->next->next->next->next->next; // 2 -> 6
    head->next->next->rand = head->next->next->next->next; // 3 -> 5
    head->next->next->next->rand = head->next->next; // 4 -> 3
    head->next->next->next->next->rand = nullptr; // 5 -> null
    head->next->next->next->next->next->rand = head->next->next->next; // 6 -> 4

    printRandLinkedList(head);
    Node* res1 = copyListWithRand1(head);
    printRandLinkedList(res1);
    Node* res2 = copyListWithRand2(head);
    printRandLinkedList(res2);
    printRandLinkedList(head);
    
    freeList(head); // �ͷ�ԭʼ����
    freeList(res1); // �ͷŵ�һ�ַ������Ƶ�����
    freeList(res2); // �ͷŵڶ��ַ������Ƶ�����
    return 0;
}
