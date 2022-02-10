#include <iostream>
#include <vector>

using namespace std;

class Heap{
public:
    vector<int> h;
    int sz;
    int SIZE;
    Heap(int n) {
        sz = 0;
        SIZE = n;
        h.push_back(2147483647);
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
            if (h[left_child(i)] > h[right_child(i)]) return left_child(i);
            else if(h[right_child(i)] == h[left_child(i)]) return left_child(i);
            else return right_child(i);
        }
        else if (left_child(i) <= sz)
            return left_child(i);
        else return -1;
    }

    void add(int x) {
        if (sz < SIZE) {
            h.push_back(x);
            sz++;
            int i = sz;
            while (i > 1 && h[parent(i)] < x) {
                swap(h[i], h[parent(i)]);
                i = parent(i);
            }
            cout << i << endl;
        } else  {
            cout << -1 << endl;
        }
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

    void extract_max(){
        if (sz > 1) {
            int max_val = h[1];
            swap(h[1], h[sz]);
            sz--;
            int pos = shift_down(1, 0);
            h.pop_back();
            cout << pos << " " << max_val << endl;
        } else if (sz == 1) {
            cout << 0 << " " << h[1] << endl;
            h.pop_back();
            sz--;
        }
        else cout << -1 << endl;
    }

    void dlt(int i) {
        if (i < 1 || i > sz) {
            cout << -1 << endl;
        }
        else {
            cout << h[i] << endl;
            swap(h[i], h[sz]);
            h.pop_back();
            sz--;
            if (h[i] > h[parent(i)]) shift_up(i, 0);
            else shift_down(i, 0);
        }
    }

    void print() {
        // cout << sz << endl;
        for (int i = 1; i <= sz; i++){
            cout << h[i] << " ";
        }

    }
};

int main(){
    int n, m;
    cin >> n >> m;
    Heap heap(n);

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        if (k == 1)
            heap.extract_max();
        else if (k == 2) {
            int l;
            cin >> l;
            heap.add(l);
        } else if (k == 3) {
            int l;
            cin >> l;
            heap.dlt(l);
        }
    }

    heap.print();

    return 0;
}

