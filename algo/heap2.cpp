#include "iostream"

using namespace std;

class Heap{
public:
    int h[10000000];
    int sz;

    Heap() {
        sz = 0;
        h[0] = -1;
    }

    int parent(int i) {
        return i / 2;
    }
    int left_child(int i) {
        return i * 2;
    }
    int right_child(int i) {
        return i * 2 + 1;
    }

    int max_child(int i) {
        if (left_child(i) <= sz && right_child(i) <= sz){
            if (h[right_child(i)] > h[left_child(i)]) return right_child(i);
            else if(h[right_child(i)] == h[left_child(i)]) return left_child(i);
            else return left_child(i);
        }
        else if (left_child(i) <= sz)
            return left_child(i);
        else return -1;
    }

    void add(int x) {
        sz++;
        h[sz] = x;
//            cout << i << endl;
    }

    int shift_up(int pos, int val) {
        h[pos] += val;
        // cout << h[pos] << endl << endl;
        while (pos > 1 && h[parent(pos)] < h[pos]) {
            swap(h[pos], h[parent(pos)]);
            pos = parent(pos);
        }
        return pos;
    }

    int shift_down(int pos, int val) {
        h[pos] -= val;
        while (max_child(pos) != -1 && h[max_child(pos)] > h[pos]) {
            int mc = max_child(pos);
            swap(h[max_child(pos)], h[pos]);
            pos = mc;
        }
        return pos;
    }

    void print() {
        for (int i = 1; i <= sz; i++){
            cout << h[i] << " ";
        }

    }

//    void ExtractMax() {
//        if(sz > 1){
//            int max_val = h[1];
//            swap(h[1], h[sz]);
//            sz--;
//            int pos = 1;
//            while (max_child(pos) != -1 && h[max_child(pos)] > h[pos]) {
//                int mc = max_child(pos);
//                swap(h[max_child(pos)], h[pos]);
//                pos = mc;
//            }
//            cout << pos << " " << max_val << endl;
//        }
//        else if(sz == 1) {
//            cout << 0 <<  " " << h[1] << endl;
//            sz--;
//        }else{
//            cout << -1 << endl;
//        }
//    }

    void del(int x){
        if(x > 0 and x <= sz){
//            cout << h[x] << endl;
            swap(h[x], h[sz]);
            sz--;
            if (h[x] > h[parent(x)]) shift_up(x, 0);
            else shift_down(x, 0);
        }else{
            cout << -1 << endl;
        }
    }

    void Build_Heap2(){
        for(int i = sz; i >= 1; i--){
            shift_down(i, 0);
        }
    }

    bool empty(){
        return sz == 0;
    }
};

int main(){
    Heap hp;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        hp.add(x);
    }

    hp.Build_Heap2();
    hp.print();
    return 0;
}