#include "iostream"

using namespace std;

struct node{
    int val;
    node *next;
    node(int x){
        val  = x;
        next = NULL;
    }

};

class LinkedList{
    node *head;

public:
    LinkedList(){
        head = NULL;
    }

    void push_back(int val){
        node *newNode = new node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        node * last = head;
        while(last->next !=NULL){
            last = last->next;
        }
        last->next = newNode;
    }

    void print(){
        node *curr = head;
        while(curr != NULL){
            cout << curr->val << " ";
            curr = curr->next;
        }
    }
};


int main(){
    LinkedList ll;
    int a[] = {1, 4 ,7, 3, 9, 2};
    int n = sizeof (a)/ sizeof (int);
    for (int i = 0; i < n; ++i) {
        ll.push_back(a[i]);
    }
    ll.print();
    return 0;
}