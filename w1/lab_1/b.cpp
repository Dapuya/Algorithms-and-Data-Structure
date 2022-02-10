#include "iostream"

using namespace std;

class node{
public:
    int val;
    node * next;

    node(int x){
        this->val = x;
        this->next = NULL;
    }
};

class queue{
public:
    node * head;
    node * tail;
    int siz;

    queue(){
        head = NULL;
        tail = NULL;
        siz = 0;
    }

    void push(int itm){
        node *item = new node(itm);
        if(siz == 0){
            head = tail = item;
        }else{
            tail->next = item;
            tail = item;
        }
        siz++;
    }

    void pop(){
        head = head->next;
        siz--;
    }

    int size(){
        return siz;
    }

};

int main(){
    string s;
    queue *q = new queue();
    while(true){
        cin >> s;

        if(s == "push"){
            int n;
            cin >> n;
            q->push(n);
            cout << "ok" << endl;
        }
        else if(s == "pop"){
            if(q->size() == 0){
                cout << "error" << endl;
            }else{
                cout << q->head->val << endl;
                q->pop();
            }
        }
        else if(s == "front"){
            if(q->size() == 0){
                cout <<"error" << endl;
            }
            else if(q->head != NULL) {
                cout << q->head->val << endl;
            }else{
                cout << q->tail->val << endl;
            }
        }
        else if(s == "size"){
            cout << q->size() << endl;

        }
        else if(s == "clear"){
            while(q->size() > 0){
                q->pop();
            }
            cout << "ok" << endl;

        }
        else if(s == "exit"){
            cout << "bye" << endl;
            break;
        }

    }
    return 0;
}