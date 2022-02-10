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
int cnt;
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

    int height(node *cur){
        if( cur == NULL){
            return 0;
        }
        return max(height(cur->left), height(cur->right)) + 1;
    }

    int isBalanced(node * root){
        if(root == NULL){
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        if (abs(l - r) == 0 && isBalanced(root->left) && isBalanced(root->right)) return abs(l-r);
        else return 0;
    }

    void razv(node *cur){
        if( cur == NULL){
            return;
        }
        razv(cur->left);
        if(cur->left and cur->right) {
            cnt++;
        }
        razv(cur->right);
        return;
    }

    void triangle(node * root, int k){
        if(root == NULL) {
            return;
        }
        int l = goLeft(root -> left);
        int r = goRight(root -> right);
        if (l == r && l == k){
            cnt++;
        }
        triangle(root->left, k);
        triangle(root->right, k);
    }

    int checkLength(){
        return goLeft(root);
    }

    int goLeft(node * root){
        if (root == NULL) return 0;
        return goLeft(root -> left) + 1;
    }

    int goRight(node * root){
        if (root == NULL) return 0;
        return goRight(root -> right) + 1;
    }

public:
    int cnt;
    bst(){
        root = NULL;
        cnt = 0;
    }
    void insert(int val){
        root = insert(root, val);
    }

    void printHeight(){
        cout << height(root) << endl;
    }

    void Balance(){
        cout << isBalanced(root) << " ";
    }

    bool triangle(int k){
        triangle(root, k);
    }

    void printrazv(){
        razv(root);
    }

    int check(){
        return checkLength();
    }
};

int main(){
    bst tree;
    int x;
    int n;
    cin >> n;
    while(n--){
        cin >> x;
        tree.insert(x);
    }
    for (int i = 2; i <= n; i++){
        tree.triangle(i);
        cout << tree.cnt << " ";
    }
//    tree.printrazv();
//    cout << cnt << endl;
//    cout << tree.check() << endl;
    return 0;
}
