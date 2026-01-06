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

TreeNode* insert(TreeNode* root,int value) {
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

    int jumlahList;
    cout << "Berapa jumlah list? ";
    cin >> jumlahList;

    for (int i = 0; i < jumlahList; i++) {
        int jumlahAngka;
        cout << "\nJumlah angka pada list ke-" << i + 1 << ": ";
        cin >> jumlahAngka;

        cout << "Masukkan angka:\n";
        for (int j = 0; j < jumlahAngka; j++) {
            int angka;
            cin >> angka;
            root = insert(root, angka);
        }
    }

    cout << "InOrder Traversal : ";
    inOrder(root);
    cout << endl;

    return 0;
}