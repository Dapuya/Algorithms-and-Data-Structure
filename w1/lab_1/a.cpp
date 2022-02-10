#include <iostream>
#include "vector"
using namespace std;

class node{
public:
    int val;
    node * prev;
    node(int x){
        this->val = x;
        this->prev = NULL;
    }
};

class stack{
public:
    node * tail;
    int siz;

    stack(){
        tail = NULL;
        siz = 0;
    }

    void push(int data){
        node *item = new node(data);
        item->prev = tail;
        tail = item;
        siz++;
    }

    int back(){
        if(tail== NULL){
            return -1;
        }else{
            return tail->val;
        }
    }

    void pop(){
        if(tail != NULL){
            tail = tail->prev;
            siz--;
        }
    }

    int size(){
        return siz;
    }

    bool empty(){
        return tail==NULL;
    }


};

int main() {
    stack * st= new stack();

    string s = "";
    while (s != "exit") {
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            st->push(n);
            cout << "ok" << endl;
        }

        else if (s == "pop") {
            if(st->size() == 0 ) {
                cout << "error" << endl;
            }
            else{
                cout << st->back() << endl;
                st->pop();

            }
        }


        else if (s == "back") {
            if (st->back() == -1) {
                cout << "error" << endl;
            } else {
                cout << st->back() << endl;
            }
        }

        else if (s == "size") {
            cout << st->size() << endl;
        }

        else if (s == "clear") {
            while (st->size() > 0) {
                st->pop();
            }
            if (st->empty()) {
                cout << "ok" << endl;
            }
        }


        else if(s == "exit"){
            cout << "bye" << endl;
            break;
        }
    }


    return 0;
}
