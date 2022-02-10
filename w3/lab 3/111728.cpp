#include "iostream"

using namespace std;

struct node{
    int val;
    node *next;
    node(int x){
        val  = x;
        next = NULL;
    }

};

class LinkedList{
    node *head;

public:
    LinkedList(){
        head = NULL;
    }

    void push_back(int val){
        node *newNode = new node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        node * last = head;
        while(last->next !=NULL){
            last = last->next;
        }
        last->next = newNode;
    }

    void print(){
        node *curr = head;
        while(curr->next != NULL){
            cout << curr->val << " ";
            curr = curr->next;
        }
    }
};

//int bin(int arr[], int l, int r, int x ){
//    string ans = "";
//    while( l <= r){
//        int m = l + (r-l) / 2;
//        if(arr[m] == x ) {
//            return l,r;
//        }
//        if(arr[m] < x){
//            l = m + 1;
//        }
//        else{
//            r = m - 1;
//        }
//    }
//    return 0;
//}

int main(){
//    int n,m;
//    cin >> n >> m;
//    int a[n], b[m];
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//    for (int j = 0; j < m; ++j) {
//        cin >> b[j];
//    }
//
//    for (int j = 0; j < m; ++j) {
//        cout << bin(a, 0, n-1, b[j]) << endl;
//    }

//    int a =3;
//    cout << &a << endl;
//    int *p;
//    p = &a;
//    cout << p << endl;
//    *p = 10;
//    cout << a << endl;
//    int **pp = &p;
//    cout << **pp << endl;
//     **pp =123;
//     cout << a << endl;

//    node head = {2};
//    cout << head.val << endl;

    LinkedList ll;
    int a[] = {1, 4 ,7, 3, 9, 2};
    int n = sizeof (a)/ sizeof (int);
    for (int i = 0; i < n; ++i) {
        ll.push_back(a[i]);
    }
    ll.print();
    return 0;
}