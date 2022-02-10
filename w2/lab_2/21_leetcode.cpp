#include "iostream"

using namespace std;

struct node{
    int val;
    node *next;


    node(int val){
        this->val = val;
        next = NULL;
    }
};

struct list{
    node * tail;
public:
    list(){
        this->tail = NULL;
    }

    void push_back(int val) {
        node *new_node = new node(val);
        node *last = tail;
        if (tail == NULL) {
            tail = new_node;
            return;
        }
        while (last->next != NULL) {
            last = last->next;
        }
    }

    void sort(){
        node *curr = tail;
        node *index = NULL;
        int temp;
        if(tail == NULL) return;
        while(curr != NULL){
            index = curr->next;
            while(index != NULL){
                if(index->val < curr->val){
                    temp = curr->val;
                    curr->val = index->val;
                    index->val = temp;
                }
                index = index->next;
            }
            curr = curr->next;
        }
    }

    void print(){
        node *currr = tail;
        while(currr!=NULL){
            cout << currr->val << " ";
            currr = currr->next;
        }
    }
};

//struct sortedStack{
//    node * tail;
//    int size;
//
//    sortedStack(){
//        this->tail = NULL;
//        this->size = 0;
//    }
//
//    void add(node *item){
//        if(tail == NULL){
//            tail = item;
//        }
//        if(item->cnt > tail->cnt){
//            item->next = tail;
//            tail = item;
//            return;
//        }
//
//        node *temp = tail;
//        while(temp->next and temp->next->cnt >= item->cnt){
//            temp = temp->next;
//        }
//        node *next = temp->next;
//        temp->next = item;
//        item->next = next;
//    }
//
//    void print(){
//        node *curr = tail;
//        while(curr){
//            cout << curr->val << " " << curr->cnt << endl;
//            curr = curr->next;
//        }
//    }
//
//};

int main(){
    list l;
    int n;
    cin >> n;
    int s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        l.push_back(s);
    }
    l.sort();
    l.print();
}

// 1, 1, 2, 3, 4, 4