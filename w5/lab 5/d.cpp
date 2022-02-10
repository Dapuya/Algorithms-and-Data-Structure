#include <iostream>
#include <vector>

using namespace std;

class Heap{
public:
    vector<int> h;
    int sz;
    int SIZE;
    Heap(int SIZE) {
        this->SIZE = SIZE;
        sz = 0;
        h.push_back(-1);
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

    void add(int x) {  // adding duplicates
        if(sz < SIZE) {
            h.push_back(x);
            sz++;
            int i = sz;
            while (i > 1 && h[parent(i)] < x) {
                swap(h[i], h[parent(i)]);
                i = parent(i);
            }
            cout << i << endl;
        }else{
            cout << -1 << endl;
        }
    }
//    void add(int x) {
//        if (sz < SIZE) {
//            h.push_back(x);
//            sz++;
//            int i = sz;
//            while (i > 1 && h[parent(i)] < x) {
//                swap(h[i], h[parent(i)]);
//                i = parent(i);
//            }
//            cout << i << endl;
//        } else  {
//            cout << -1 << endl;
//        }
//    }

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

    void ExtractMax() {
        if(sz > 1){
            int max_val = h[1];
            swap(h[1], h[sz]);
            sz--;
            int pos = 1;
            while (max_child(pos) != -1 && h[max_child(pos)] > h[pos]) {
                int mc = max_child(pos);
                swap(h[max_child(pos)], h[pos]);
                pos = mc;
            }
            h.pop_back();
            cout << pos << " " << max_val << endl;
        }
        else if(sz == 1) {
            cout << 0 <<  " " << h[1] << endl;
            h.pop_back();
            sz--;
        }else{
            cout << -1 << endl;
        }
    }
//    void extract_max(){
//        if (sz > 1) {
//            int max_val = h[1];
//            swap(h[1], h[sz]);
//            sz--;
//            int pos = shift_down(1, 0);
//            h.pop_back();
//            cout << pos << " " << max_val << endl;
//        } else if (sz == 1) {
//            cout << 0 << " " << h[1] << endl;
//            h.pop_back();
//            sz--;
//        }
//        else cout << -1 << endl;
//    }

    bool empty(){
        return sz == 0;
    }
};

int main(){
    int n, m, k;
    cin >> n >> m;

    Heap heap(n);

    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        cnt++;
        int x;
        cin >> x;
        if( x == 1){
            heap.ExtractMax();
        }
        if(x == 2){
            cin >> k;
            heap.add(k);
        }
    }

    heap.print();

    return 0;
}
