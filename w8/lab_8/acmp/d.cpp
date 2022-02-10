#include "iostream"
#include "math.h"
#include <map>

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


    int height(node *cur){
        if( cur == NULL){
            return 0;
        }
        return max(height(cur->left), height(cur->right)) + 1;
    }

    int maxdist(struct node* root){
        if (root == NULL) {
            return 0;
        }

        int right_h = height(root->right);
        int left_h = height(root->left);

        int right_dist  = maxdist(root->right);
        int left_dist = maxdist(root->left);

//        cout << "ffgf";

        return max(left_h + right_h + 1, max(left_dist, right_dist));
    }

public:
    bst(){
        root = NULL;

    }
    void insert(int val){
        root = insert(root, val);
    }


    void printHeight(){
        cout << height(root) << endl;
    }


    void Max_Distance(){
        cout << maxdist(root) << endl;
    }
};

int main(){
    bst tree;
    int n;
    cin >> n;
    int x;
    while(n>0){
        cin >> x;
        if(x == 0){
            break;
        }else{
            tree.insert(x);
        }
        n--;
    }

    tree.Max_Distance();


    return 0;
}

