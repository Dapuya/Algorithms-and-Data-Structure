#include "iostream"
#include "vector"

using namespace std;

class Heap{
    vector <int> h;
    int sizee;

public:
    Heap(){
        sizee = 0;
        h.push_back(-1);
    }

    int left(int i){
        return i*2;
    }

    int right(int i){
        return (i*2 + 1);
    }

    int parent(int i){
        return i/2;
    }

    void add(int x){
        h.push_back(x);
        sizee++;
        int i = sizee;
        while (i > 1 and h[i] > h[parent((i))]){
            swap(h[i], h[parent(i)]);
            i = parent(i);
        }
    }
    void print(){
        for (int i = 1; i < h.size(); ++i) {
            cout << h[i] << " ";
        }
    }

    int max_child(int i){
        if(left(i) <= sizee and  right(i) <= sizee){
            if (h[right(i)] > h[left(i)]) return right(i);
            else return left(i);
        }
        else if (left(i) <= sizee) {
            return left(i);
        }
        else return -1;
    }

    int shift_down(int pos, int val){
        h[pos] -= val;
        while (max_child(pos) != -1 and h[max_child(pos)] > h[pos]){
            int mxpos = max_child(pos);
            swap(h[max_child(pos)], h[pos]);
            pos = mxpos;
        }
        return pos;
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
    int k, pos, val;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> pos >> val;
        cout << hp.shift_down(pos, val) << endl;
    }

    hp.print();
    return 0;
}



//5
//1
//10 4 8 3 1 7