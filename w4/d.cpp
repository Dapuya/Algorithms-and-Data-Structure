#include "iostream"

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
    tree.printAsc();
    return 0;
}
