#include "iostream"
#include "math.h"

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
        cout << cur->val << " ";
        inOrder(cur->right);
        return;
    }


    int rangeSumBST(node* root, int low, int high){
        if(root == NULL)
            return 0;
        int ans = 0;
        int left=rangeSumBST(root->left,low,high);
        if(low<=root->val && root->val<=high)
            ans=root->val;
        int right=rangeSumBST(root->right,low,high);
        return left+ans+right;
    }

    bool findTarget(node* cur, int k) {
        if(cur == NULL){
            return 0;
        }

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

    void rangeSum(int low, int high){
        cout << rangeSumBST(root, low, high);
    }

    void target(int k){
        cout << findTarget(root, k) << endl;
    }

};

int main(){
    bst tree;
    int a[] = {5, 3, 6, 2, 4, 7};
    for (int i = 0; i < 6; ++i) {
        tree.insert(a[i]);
    }
    int k = 9;
    tree.target(k);
    return 0;
}