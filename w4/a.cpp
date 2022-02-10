#include "iostream"
#include "math.h"
#include <map>

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

    node * minValue(node *cur){
        while (cur && cur->left != NULL) {
            cur = cur->left;
        }
        return cur;
    }

    node * deleteNode(node *root, int x){
        if(root == NULL){
            return root;
        }
        if( x < root->val){
            root->left = deleteNode(root->left, x);
        }else if(x > root->val){
            root->right = deleteNode(root->right, x);
        }
        else{
            if (root->left==NULL and root->right==NULL)
                return NULL;

            else if (root->left == NULL) {
                struct node* temp = root->right;
                free(root);
                return temp;
            }
            else if (root->right == NULL) {
                struct node* temp = root->left;
                free(root);
                return temp;
            }
            node *temp = minValue(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }

    void inOrder(node *cur){
        if( cur == NULL){
            return;
        }
        inOrder(cur->left);
        cout << cur->val << " ";
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

    bool isBalanced(node * root){
        if(root == NULL){
            return 1;
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

    void printHeight(){
        cout << height(root) << endl;
    }

    void del(int x){
        deleteNode(root, x);
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
//    bst tree;
//    int x;
//    while(cin >> x){
//        if(x == 0){
//            break;
//        }else{
//            tree.insert(x);
//        }
//    }
//    tree.Balance();
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 10;
    map<int,int> ma;
    for(int i = 0; i < 10; i ++){
        ma[a[i]] = i;
    }
    for (int i = 0; i < 10; i ++){
        int sub = target - a[i];
        if (ma.find(sub) != ma.end() && ma[sub] != i){
            cout << a[i] << " " << sub << endl;
        }
    }

//    tree.printAsc();
//    cout << endl;
//    tree.del(20);
//    tree.printAsc();
//    cout << endl;
//    tree.del(30);
//    tree.printAsc();
    return 0;
}


