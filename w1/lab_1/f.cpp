#include "iostream"

using namespace std;

class node{
public:
    char val;
    node * prev;
    node(char x){
        this->val = x;
        this->prev = NULL;
    }
};

class stack {
public:
    node *tail;
    int siz;

    stack() {
        tail = NULL;
        siz = 0;
    }

    void push(char x){
        node *item = new node(x);
        item->prev = tail;
        tail = item;
        siz++;
    }


    void pop(){
        if(tail != NULL) {
            tail = tail->prev;
            siz--;
        }
    }
    char back(){
        return tail->val;
    }

    bool empty(){
        return tail == NULL;
    }

};

int main(){
    stack *st = new stack();
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
            st->push(s[i]);
        }
        else {
            if (s[i] == ')' and st->back() == '(') {
                st->pop();
            }
            if (s[i] == ']' and st->back() == '[') {
                st->pop();
            }
            if (s[i] == '}' and st->back() == '{') {
                st->pop();
            }
        }
    }


    if(st->empty()){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    return 0;
}


