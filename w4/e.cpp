#include "iostream"

using namespace std;

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

    void PrintLeaves(){
        leaves(root);
    }

};


int main(){
    int x;
    bst tree;
    while(cin >> x){
        if( x == 0){
            break;
        }else{
            tree.insert(x);
        }
    }
    tree.PrintLeaves();

    return 0;
}
