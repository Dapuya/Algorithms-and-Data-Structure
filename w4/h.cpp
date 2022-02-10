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

    bool balance(node *cur){
        if( cur == NULL){
            return 0;
        }
        if((height(cur->right) + 1 == height(cur->right)) or (height(cur->right) == height(cur->right) + 1) or height(cur->right) == height(cur->right)){
            return true;
        }return false;
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

    void printHeight(){
        cout << height(root) << endl;
    }

    void balance(){
        if(balance(root)){
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
    tree.balance();
    return 0;
}


