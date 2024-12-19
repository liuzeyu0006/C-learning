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
//    int maxWidth = 0;//���ڼ�¼���������������������
//    int curWidth = 0;//���ڼ�¼��ǰ�㼶�Ľڵ���
//    int curLevel = 0;//����׷�ٵ�ǰ���ڵĲ㼶��
//    std::unordered_map<Node*, int> levelMap;
//    levelMap[head] = 1;
//    std::queue<Node*> queue;
//    queue.push(head);
//    Node* node = nullptr;
//
//    while (!queue.empty()) {
//        node = queue.front();//�Ӷ�����ȡ��һ���ڵ㣨���е�ǰ�ˣ���������Ӷ������Ƴ���
//        queue.pop();
//        Node* left = node->left;//ȡ�õ�ǰ�ڵ�������ӽڵ㡣
//        Node* right = node->right;
//
//        if (left != nullptr) {//������ӽڵ���ڣ�����㼶����Ϊ��ǰ�ڵ�㼶��1�������������С�
//            levelMap[left] = levelMap[node] + 1;
//            queue.push(left);
//        }
//        if (right != nullptr) {//������ӽڵ���ڣ�����㼶����Ϊ��ǰ�ڵ�㼶��1�������������С�
//            levelMap[right] = levelMap[node] + 1;
//            queue.push(right);
//        }
//
//        //�����ǰ�ڵ�Ĳ㼶���� curLevel����ʾ��ʼ��һ���²㼶�ı������������ curLevel Ϊ��ǰ�ڵ�Ĳ㼶��
//        //������ curWidth Ϊ1��������ڵ�ǰ�㼶��ֻ�轫 curWidth ������
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
