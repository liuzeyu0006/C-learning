//【题目】一种特殊的单链表节点类描述如下
//class Node {
//	int value;
//	Node next;
//	Node rand;
//	Node(int val) {
//		value = val;
//	}
//}
//rand指针是单链表节点结构中新增的指针，rand可能指向链表中的任意一个节
//点，也可能指向null。给定一个由Node节点类型组成的无环单链表的头节点
//head，请实现一个函数完成这个链表的复制，并返回复制的新链表的头节点。
//【要求】时间复杂度O(N)，额外空间复杂度O(1)

#include <iostream>
#include <unordered_map>
#include <sstream>  



// 链表节点定义，包含next和rand指针
struct Node {
    int value;
    Node* next;
    Node* rand;

    Node(int data) : value(data), next(nullptr), rand(nullptr) {}
};

// 使用哈希表复制链表
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

// 不使用额外空间复制链表
Node* copyListWithRand2(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* cur = head;
    Node* next = nullptr;
    // 第一步：复制每个节点，并将复制的节点插入到原节点的后面
    while (cur != nullptr) {
        next = cur->next;
        Node* copy = new Node(cur->value);
        cur->next = copy;
        copy->next = next;
        cur = next;
    }
    cur = head;
    // 第二步：设置复制节点的rand指针
    while (cur != nullptr) {
        if (cur->rand != nullptr) {
            cur->next->rand = cur->rand->next;
        }
        cur = cur->next->next;
    }
    // 第三步：分离原链表和复制链表
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

// 打印链表和rand指针
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
    
    freeList(head); // 释放原始链表
    freeList(res1); // 释放第一种方法复制的链表
    freeList(res2); // 释放第二种方法复制的链表
    return 0;
}
