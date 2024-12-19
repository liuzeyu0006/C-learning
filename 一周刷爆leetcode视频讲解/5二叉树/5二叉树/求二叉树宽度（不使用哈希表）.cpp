#include <iostream>
#include <queue>

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

int getMaxWidth(Node* head) {
    if (!head) {
        return 0;
    }

    std::queue<Node*> queue;
    queue.push(head);
    int maxWidth = 0;
    Node* curEnd = head;  // ��ǰ������һ���ڵ�
    Node* nextEnd = nullptr;  // ��һ������һ���ڵ�
    int curWidth = 0;  // ��ǰ��Ŀ��

    while (!queue.empty()) {
        Node* node = queue.front();
        queue.pop();
        curWidth++;

        if (node->left) {
            queue.push(node->left);
            nextEnd = node->left;
        }
        if (node->right) {
            queue.push(node->right);
            nextEnd = node->right;
        }

        if (node == curEnd) {  // �����ǰ�ڵ��ǵ�ǰ������һ���ڵ�
            maxWidth = std::max(maxWidth, curWidth);  // ���������
            curWidth = 0;  // ���õ�ǰ����
            curEnd = nextEnd;  // ���µ�ǰ������һ���ڵ�Ϊ��һ������һ���ڵ�
        }
    }

    return maxWidth;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    std::cout << "Maximum width of the binary tree is: " << getMaxWidth(root) << std::endl;

   /* ����ʹ�ã��������ڴ洢ÿһ��Ľڵ㣬�Խ��в��������
    ��ȼ��㣺ÿ�δӶ������Ƴ�һ���ڵ�ʱ����ǰ����curWidth��������������ǰ������һ���ڵ�curEndʱ���Ƚϲ����������maxWidth��Ȼ�����õ�ǰ����Ϊ0������curEnd����ΪnextEnd�Ը�����һ������һ���ڵ㡣
    ����������������Ϊ��ʱ��������ɣ��������ؼ�����������maxWidth��*/

    // Note: Proper memory cleanup should be added here to free the allocated nodes.
    return 0;
}
