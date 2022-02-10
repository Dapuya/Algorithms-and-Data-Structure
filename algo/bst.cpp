#include "iostream"
#include "math.h"

using namespace std;

int f(int n){
    if(n == 0 or n == 1){
        return 1;
    }else{
        return f(n-1) + f(n-2 );
    }
}

struct node{
    int val;
    node *left;
    node *right;

    node(int x){
        val = x;
        left = right = NULL;
    }

};

class bst{
    node * root;

    node * insert(node* cur,  int val){
        if (cur == NULL){
            return new node(val);
        }
        if(val > cur->val){
            cur->right = insert(cur->right, val);
        }
        if(val < cur->val){
            cur->left = insert(cur->left, val);
        }
        return cur;
    }

    void inOrder(node *cur){
        if( cur == NULL){
            return;
        }
        inOrder(cur->left);
        cout << cur->val << endl;
        inOrder(cur->right);
        return;
    }

    void razv(node *cur){
        if( cur == NULL){
            return;
        }
        razv(cur->left);
        if(cur->left and cur->right) {
            cout << cur->val << endl;
        }
        razv(cur->right);
        return;
    }



    int height(node *cur){
        if( cur == NULL){
            return 0;
        }
        return max(height(cur->left), height(cur->right)) + 1;
    }

    void leaves(node *cur){
        if( cur == NULL){
            return;
        }
        leaves(cur->left);
        if(cur->left == NULL and cur->right == NULL) {
            cout << cur->val << endl;
        }
        leaves(cur->right);
        return;
    }

    bool isBalanced(node * root){
        if(root == NULL){
            return true;
        }
        int l = height(root->left);
        int r = height(root->right);
        if (abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        else return false;
    }

public:
    bst(){
        root = NULL;

    }
    void insert(int val){
        root = insert(root, val);
    }

    void printAsc(){
        inOrder(root);
    }

    void printrazv(){
        razv(root);
    }

    void PrintLeaves(){
        leaves(root);
    }

    void printHeight(){
        cout << height(root) << endl;
    }

void Balance(){
    if(isBalanced(root)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
};

int main(){
    bst tree;
    int x;
    while(cin >> x){
        if (x == 0){
            break;
        }
        else{
            tree.insert(x);
        }
    }
    tree.printHeight();
    return 0;
}