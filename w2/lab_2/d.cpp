#include "iostream"
using namespace std;

struct node{
    string data;
    int cnt;
    node * next;

    node(string x){
        data = x;
        cnt = 1;
        next = NULL;
    }
};

struct ll{
    node * head;

    void add(string x){
        node *item = new node(x);
        if(head = NULL){
            head = item;
        }
        node *curr = head;
        while(curr->next != NULL and curr->data != x){
            curr = curr->next;
        }
        if(curr->data == x){
            curr->cnt++;
            return;
        }
        curr->next = item;
        return;
    }

    void print(){
        node *curr = head;
        while (curr != NULL){
            cout << curr->data << " " << curr->cnt << endl;
            curr = curr->next;
        }
    }

    void sort(){
        node *curr = head;
        node *index;
        int tempcnt;
        string tempdata;
        while(curr != NULL){
            index = curr->next;
            while(index != NULL){
                if (curr->cnt < index->cnt){
                    tempcnt = index->cnt;
                    index->cnt = curr->cnt;
                    curr->cnt = tempcnt;
                    tempdata = index->data;
                    index->data = curr->data;
                    curr->data = tempdata;
                }
                if(curr->cnt == index->cnt and curr->data >index->data){
                    tempcnt = index->cnt;
                    index->cnt = curr->cnt;
                    curr->cnt = tempcnt;
                    tempdata = index->data;
                    index->data = curr->data;
                    curr->data = tempdata;
                }
                index = index->next;
            }
            curr = curr->next;
        }
    }
};


int main() {
    ll list;
    
    return 0;
}