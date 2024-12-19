//#include <iostream>
//#include <queue>
//#include <unordered_map>
//
//struct Node {
//    int value;
//    Node* left;
//    Node* right;
//
//    Node(int val) : value(val), left(nullptr), right(nullptr) {}
//};
//
//int getMaxWidth(Node* head) {
//    if (head == nullptr) {
//        return 0;
//    }
//    int maxWidth = 0;//用于记录遍历过程中遇到的最大宽度
//    int curWidth = 0;//用于记录当前层级的节点数
//    int curLevel = 0;//用于追踪当前所在的层级。
//    std::unordered_map<Node*, int> levelMap;
//    levelMap[head] = 1;
//    std::queue<Node*> queue;
//    queue.push(head);
//    Node* node = nullptr;
//
//    while (!queue.empty()) {
//        node = queue.front();//从队列中取出一个节点（队列的前端），并将其从队列中移除。
//        queue.pop();
//        Node* left = node->left;//取得当前节点的左右子节点。
//        Node* right = node->right;
//
//        if (left != nullptr) {//如果左子节点存在，则将其层级设置为当前节点层级加1，并将其加入队列。
//            levelMap[left] = levelMap[node] + 1;
//            queue.push(left);
//        }
//        if (right != nullptr) {//如果右子节点存在，则将其层级设置为当前节点层级加1，并将其加入队列。
//            levelMap[right] = levelMap[node] + 1;
//            queue.push(right);
//        }
//
//        //如果当前节点的层级大于 curLevel（表示开始了一个新层级的遍历），则更新 curLevel 为当前节点的层级，
//        //并重置 curWidth 为1。如果还在当前层级，只需将 curWidth 递增。
//        if (levelMap[node] > curLevel) {
//            curLevel = levelMap[node];
//            curWidth = 1; // Reset width for new level
//        }
//        else {
//            curWidth++;
//        }
//        maxWidth = std::max(maxWidth, curWidth);
//    }
//
//    return maxWidth;
//}
//
//int main() {
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    std::cout << "Maximum width of the binary tree is: " << getMaxWidth(root) << std::endl;
//
//    // Clean up
//    // You should add a delete tree function here to properly free memory.
//}
