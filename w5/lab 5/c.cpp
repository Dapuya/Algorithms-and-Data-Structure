#include <iostream>
#include <vector>

using namespace std;

class Heap{
public:
    vector<int> h;
    int sz;
    Heap() {
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
            else return left_child(i);
        }
        else if (left_child(i) <= sz)
            return left_child(i);
        else return -1;
    }

    void add(int x) {
        h.push_back(x);
        sz++;
        int i = sz;
        while (i > 1 && h[parent(i)] < x) {
            swap(h[i], h[parent(i)]);
            i = parent(i);
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

    void print() {
        // cout << sz << endl;
        for (int i = 1; i <= sz; i++){
            cout << h[i] << " ";
        }

    }

    void ExtractMax(){
        int max_val = h[1];
        h[1] = h[sz];
        int pos = 1;
        while (max_child(pos) != -1 && h[max_child(pos)] > h[pos]) {
            int mc = max_child(pos);
            swap(h[max_child(pos)], h[pos]);
            pos = mc;
        }
        sz--;
        cout << pos << " " << max_val << endl;
    }
};

int main(){
    int n;
    cin >> n;

    Heap heap;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        heap.add(x);
    }

    for (int i = 0; i < n-1; i++) {
        heap.ExtractMax();
    }


    return 0;
}