#include "iostream"
#include "string"

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

    int sizee(){
        return siz;
    }

};

int main() {
    queue *que1 = new queue();
    queue *que2 = new queue();
    int x;
    for(int i = 0; i < 5; i++){
        cin >> x;
        que1->push(x);
    }
    for(int i = 0; i < 5; i++){
        cin >> x;
        que1->push(x);
    }
//    while (que1->sizee() < 6) {
//        cin >> s;
//        que1->push(s);
//    }
//    while (que2->sizee() < 6) {
//        cin >> t;
//        que2->push(t);
//    }

    int temp1, temp2, cnt = 0;


    while (que1->sizee() > 0 or que2->sizee() > 0) {
        temp1 = que1->head->val;
        temp2 = que2->head->val;
        que1->pop();
        que2->pop();
        if (temp1 == 0 and temp2 == 9) {
            que1->push(temp1);
            que1->push(temp2);
            cnt++;
        } else if (temp2 == 0 and temp1 == 9) {
            que2->push(temp1);
            que2->push(temp2);
            cnt++;
        } else if (temp1 > temp2) {
            que1->push(temp1);
            que1->push(temp2);
            cnt++;
        } else if (temp2 > temp1) {
            que2->push(temp1);
            que2->push(temp2);
            cnt++;
        }
        if (cnt > 1000000) {
            cout << "botva" << endl;
            return 0;
        }

        if (que1->sizee() == 0) {
            cout << "second" << " " <<  cnt << endl;
        } else if (que2->sizee() == 0) {
            cout << "first" << " " << cnt << endl;
        }
    }
    return 0;

}