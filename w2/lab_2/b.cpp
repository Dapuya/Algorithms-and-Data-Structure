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
    int siz = 0;

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
                if(index->cnt > curr->cnt) {
                    tcnt = curr->cnt;
                    curr->cnt = index->cnt;
                    index->cnt = tcnt;
                    tdata = curr->data;
                    curr->data = index->data;
                    index->data = tdata;
                }
                if(index->cnt == curr->cnt and index->data < curr->data){
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
    stack st;
    string s;
    while(cin >> s){
        st.add(s);
    }

//    stack st;
//    string a[] = {"i", "was", "he", "was", "she", "he", "it", "she"};
//    int n = sizeof a/sizeof (a[0]);
//    for (int i = 0; i < n; ++i) {
//        st.add(a[i]);
//    }
    st.sort();
    st.print();

    return 0;
}