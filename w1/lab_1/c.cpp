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
    string s;
    auto *dq = new deque();
    while(true){
        cin >> s;
        if(s == "push_front"){
            int n;
            cin >> n;
            dq->push_front(n);
            cout << "ok" << endl;
        }
        else if(s == "push_back"){
            int n;
            cin >> n;
            dq->push_back(n);
            cout << "ok" << endl;
        }
        else if(s == "pop_front"){
            if(dq->size()==0){
                cout << "error" << endl;
            }else{
                cout << dq->head->val << endl;
                dq->pop_front();
            }
        }
        else if(s == "pop_back"){
            if(dq->size()==0){
                cout << "error" << endl;
            }else{
                cout << dq->tail->val << endl;
                dq->pop_back();
            }
        }
        else if(s == "front"){
            if(dq->size()==0){
                cout << "error" << endl;
            }else{
                if(dq->head == NULL){
                    cout << dq->tail->val << endl;
                }else {
                    cout << dq->head->val << endl;
                }
            }
        }
        else if(s == "back"){
            if(dq->size()==0){
                cout << "error" << endl;
            }else{
                if(dq->tail == NULL){
                    cout << dq->head->val << endl;
                }else {
                    cout << dq->tail->val << endl;
                }
            }
        }
        else if(s == "size"){
            cout << dq->size() << endl;
        }
        else if(s == "clear"){
            auto *dq1 = new deque();
            swap(dq, dq1);
            cout << "ok" << endl;
        }
        else if(s == "exit"){
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}
