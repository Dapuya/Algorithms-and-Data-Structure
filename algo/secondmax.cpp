#include <iostream>

using namespace std;

struct node{
    int val;
    node * left;
    node * right;
    node (int val) {
        this->val = val;
        left = right = NULL;
    }
};

class BST{
    node * root;
    int cnt;
    int secondMaximum;
    int smx;

    node * insert(node * root, int val){
        if(root == NULL) {
            return new node(val);
        }
        if(val > root->val) root->right = insert(root->right, val);
        if(val < root->val) root->left = insert(root->left, val);
        return root;
    }

    void secondMax(node * root){
        if (root -> right != NULL) secondMax(root -> right);
        cnt++;
        if (cnt == 2){
            secondMaximum = root -> val;
            return;
        }
        if (root -> left != NULL) secondMax(root -> left); 
    }

    void print(node * root) {
        if(root == NULL) return;
        print(root->left);
        cout << root->val << endl;
        print(root->right);
        return;
    }

public:
    BST() {
        root = NULL;
        cnt = 0;
        secondMaximum = 0;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void print() {
        print(root);
        cout << endl;
    }

    int secondMax(){
        secondMax(root);
        return secondMaximum;
    }
};


int main() {

    BST derevo;
    int m;
    cin >> m;

    int k = 0;
    while(m != 0){
        derevo.insert(m);
        cin >> m;
    }
    cout << derevo.secondMax() << endl;
    return 0;
}