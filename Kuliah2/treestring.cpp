#include <iostream>
using namespace std;

struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, string value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }
    if (value < root -> data) {
        root -> left = insert(root -> left, value);
    } else if (value > root -> data) {
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
    root = insert(root, "Richard");
    root = insert(root, "Petrik");
    root = insert(root, "Davelan");
    root = insert(root, "Hans");
    root = insert(root, "Timothy");
    root = insert(root, "Skay");
    root = insert(root, "Stefanus");

    cout << "InOrder Traversal : ";
    inOrder(root);
    cout << endl;
    
    return 0;
}