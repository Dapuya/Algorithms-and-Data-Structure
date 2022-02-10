#include "iostream"
using namespace std;

struct node{
    node *next;
    string data;
    int cnt;

    node(string data){
        this->next = NULL;
        this->cnt = 1;
        this->data = data;
    }
};

struct stack{
    node *tail;
    int siz;
    stack(){
        this->tail = NULL;
        this->siz = 0;
    }

    void add(string data){
        node *item = new node(data);
        if(tail == NULL){
            tail = item;
            return;
        }
        node *curr = tail;
        while(curr->next != NULL and curr->data != data ) {
            curr = curr->next;
        }
        if(curr->data == data){
            curr->cnt++;
            return;
        }
        curr->next = item;
        return;

    }

    void print(){
        node *curr = tail;
        while(curr){
            cout << curr->data << " " << curr->cnt << endl;
            curr = curr->next;
        }
    }

    void sort(){
        node *curr = tail;
        node *index = NULL;
        int tcnt;
        string tdata;
        while(curr != NULL){
            index = curr->next;
            while(index != NULL){
                if(index->data < curr->data){
                    tcnt = curr->cnt;
                    curr->cnt = index->cnt;
                    index->cnt = tcnt;
                    tdata = curr->data;
                    curr->data = index->data;
                    index->data = tdata;
                }
                index = index->next;
            }
            curr = curr->next;
        }
    }

};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //Лексикографическому порядку
    stack st;
    string s;
    while(cin >> s){
        st.add(s);
    }

    st.sort();
    st.print();

    return 0;
}