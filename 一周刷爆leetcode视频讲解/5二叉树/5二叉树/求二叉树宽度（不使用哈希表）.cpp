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
    Node* curEnd = head;  // 当前层的最后一个节点
    Node* nextEnd = nullptr;  // 下一层的最后一个节点
    int curWidth = 0;  // 当前层的宽度

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

        if (node == curEnd) {  // 如果当前节点是当前层的最后一个节点
            maxWidth = std::max(maxWidth, curWidth);  // 更新最大宽度
            curWidth = 0;  // 重置当前层宽度
            curEnd = nextEnd;  // 更新当前层的最后一个节点为下一层的最后一个节点
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

   /* 队列使用：队列用于存储每一层的节点，以进行层序遍历。
    宽度计算：每次从队列中移除一个节点时，当前层宽度curWidth递增。当遇到当前层的最后一个节点curEnd时，比较并更新最大宽度maxWidth，然后重置当前层宽度为0，并将curEnd设置为nextEnd以跟踪下一层的最后一个节点。
    结束条件：当队列为空时，遍历完成，函数返回计算出的最大宽度maxWidth。*/

    // Note: Proper memory cleanup should be added here to free the allocated nodes.
    return 0;
}
