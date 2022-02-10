#include "iostream"
using namespace std;

struct node{
    int val;
    node *next;
    node *prev;

    node(int x){
        val = x;
        next = NULL;
        prev = NULL;
    }
};

struct ll{
    node *tail;
    node *head;
    int siz;

    ll(){
        siz = 0;
        head = NULL;
        tail = NULL;
    }

    void add(int x){
        node *item = new node(x);
        siz++;
        if(head == NULL){
            head = tail = item;
        }else{
            tail->next = item;
            item->prev = tail;
            tail = item;
        }
    }
    node *find(int x){
        node *temp;
        node *result = NULL;
        while(temp != NULL){
            if(temp->val == x){
                result = temp;
                break;
            }else{
                temp = temp->next;
            }
        }
        return result;
    }

    void del(node *n){
        if(n != NULL){
            siz--;
            if(n->prev == NULL and n->next == NULL){
                tail = head = NULL;
            }else if(n->prev != NULL and n->next != NULL){
                n->prev->next = n->next;
                n->next->prev = n->prev;
            }else if(n->prev == NULL and n->next != NULL){
                head = n->next;
                n->next->prev = NULL;
            }else if(n->next == NULL and n->prev != NULL){
                tail = n->prev;
                n->prev->next = NULL;
            }
        }
        delete n;
    }

    void del(int x){
        node *temp = find(x);
        del(temp);
    }

    void print_from_tail(){
        node * temp = tail;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    void print_from_head(){
        node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isEmpty(){
        return siz==0;
    }
};

int main(){
    ll *l = new ll();
    int n[] = {1, 2, 3, 4, 7, 8};
    for (int i = 0; i < (sizeof(n) / sizeof (int)); ++i) {
        l->add(n[i]);
    }
    l->print_from_head();

    return 0;
}
