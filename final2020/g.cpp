#include "iostream"
#include "algorithm"

using namespace std;

class node{
public:
    string val;
    node * next;

    node(string x){
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

    void push(string itm){
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
    int n;
    char z;
    string s;
    queue *q = new queue();
    for (int i = 0; i < n; ++i) {
        cin >> z >> s;
        if(z == '+'){
            q->push(s);
        }
        if(z == '-'){
            q.delete(s);
        }
        if( z == '?'){

        }
    }


    return 0;
}