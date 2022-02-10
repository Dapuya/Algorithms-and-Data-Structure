#include "iostream"

using namespace std;

class node{
public:
    int val;
    node *prev;
    node *next;

    node(int x){
        this->val = x;
        this->next = NULL;
        this->prev = NULL;

    }
};

class deque{
public:
    int siz;
    node *tail;
    node *head;

    deque(){
        siz = 0;
        tail = NULL;
        head = NULL;
    }

    void push_front(int x){
        node *item = new node(x);
        if(siz == 0){
            head = tail = item;
        }else{
            item->next = head;
            head->prev = item;
            head = head->prev;

        }
        siz++;
    }

    void push_back(int x){
        node *item = new node(x);
        if(siz == 0){
            head = tail = item;
        }else{
            item->prev = tail;
            tail->next = item;
            tail = tail->next;
        }
        siz++;
    }

    void pop_front(){
        if(head == NULL){
            tail == NULL;
        }else{
            head = head->next;
        }
        siz--;
    }

    void pop_back(){
        if(tail == NULL) {
            head == NULL;
        }else{
            tail = tail->prev;
        }
        siz--;
    }

    int size(){
        return siz;
    }
};


int main(){
    int n,k;
    char o;
    deque *q1 = new deque();
    deque *q2 = new deque();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> o;
        if (o == '+'){
            cin >> k;
            q2->push_back(k);
        }
        else if(o == '-'){
            cout << q1->head->val << endl;
            q1->pop_front();
        }
        else if(o == '*'){
            cin >> k;
            q2->push_front(k);
        }

        if(q2->siz > q1->siz){
            q1->push_back(q2->head->val);
            q2->pop_front();
        }
    }

    return 0;
}