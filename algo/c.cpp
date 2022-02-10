#include "iostream"

using namespace std;

struct Node {
    int value;
    int ans;

    Node *prev;
    Node(int x) {
        value = x;
        prev = nullptr;
        ans = -1;
    }
};

struct Stack {
private:
    Node *head = nullptr;
    int sz = 0;
public:

    int top() {
        return head->value;
    }

    void pop() {
        head = head->prev;
        sz--;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }

    int push(int x) {
        Node * node = new Node(x);
        if(head == nullptr){
            head = node;
            head -> prev = nullptr;
        }
        else {
            node->prev = head;
            head = node;
        }
        Node *index = head->prev;
        while(index != nullptr){
            if (index->value <= x){
                node->ans = index->value;
                break;
            }
            index = index->prev;
        }
        return node->ans;
    }

};

int main() {
    int n;
    cin >> n;
    Stack st;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << st.push(x) << " ";
    }
    return  0;
}