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

    void dell(node *n){
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
        dell(temp);
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
    char x;
    int y;
    ll *list = new ll();
    while(cin >> x >> y){
//        if(x == ' ' or y == ' '){
//            break;
//        }
        if(x == '+'){
            list->add(y);
        }else if(x == '-'){
            list->del(y);
        }else if(x == '-' and list->find(y) == NULL){
            cout << "ERROR" << endl;
        }
    }

    if(!list->isEmpty()) {
        list->print_from_head();
    }else{
        cout << "EMPTY" << endl;
    }
    return 0;
}