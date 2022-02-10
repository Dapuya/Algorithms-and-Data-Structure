#include <iostream>
#include "vector"
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

class stack{
public:
    node * tail;
    int siz;

    stack(){
        tail = NULL;
        siz = 0;
    }

    void push(char data){
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

    string s;
    cin >> s;
    for(char i: s){
        if(st->empty())st->push(i);
        else if(i == st->tail->val) st->pop();
        else if(i != st->tail->val) st->push(i);
    }
    if(st->empty()) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}








