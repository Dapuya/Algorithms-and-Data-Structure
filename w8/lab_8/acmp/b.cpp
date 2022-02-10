#include <iostream>

using namespace std;
int size = 0;

struct Node{
    int val;
    Node* next;
    Node(): val(0), next(nullptr) {}
    Node(int x): val(x), next(nullptr) {}
    Node(Node* next): val(0), next(next) {}
    Node(int x, Node* next): val(x), next(next) {}
};

Node* insert(Node* head, Node* node, int p){
    node->val = p;
    node->next = nullptr;
    Node *last = head;
    if(head == NULL){
        head = node;
        return node;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = node;
    return node;
}

Node* remove(Node* head, int p){
    Node *last = head;
    while (last->next != NULL) {
        last = last->next;
    }
}

Node* replace(Node* head, int p1, int p2){

}

Node* reverse(Node* head){
    Node* curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


void print(Node* head){
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

Node* cyclic_left(Node* head, int x){
    /* write your code here */
}

Node* cyclic_right(Node* head, int x){
    /* write your code here */
}

int main(){
    Node* head = nullptr;
    while (true)
    {
        int command; cin >> command;
        if (command == 0){
            break;
        }else if(command == 1){
            int x, p;
            cin >> x >> p;
            head = insert(head, new Node(x), p);
        }else if (command == 2){
            int p;
            cin >> p;
            head = remove(head, p);
        }else if (command == 3){
            print(head);
        }else if (command == 4){
            int p1, p2;
            cin >> p1 >> p2;
            head = replace(head, p1, p2);
        }else if (command == 5){
            head = reverse(head);
        }else if (command == 6){
            int x;
            cin >> x;
            head = cyclic_left(head, x);
        }else if (command == 7){
            int x;
            cin >> x;
            head = cyclic_right(head, x);
        }
    }
    return 0;
}