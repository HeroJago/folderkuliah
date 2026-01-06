#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }
    if (value < root -> data) {
        root -> left = insert(root -> left, value);
    } else if (value < root -> data) {
        root -> right = insert(root -> right, value);
    }
    return root;
}

void inOrder(TreeNode* root) {
    if (root == nullptr) return;
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "InOrder Traversal : ";
    inOrder(root);
    cout << endl;

    return 0;
}