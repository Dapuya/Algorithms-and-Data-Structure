#include "iostream"

using namespace std;

struct heap_max{
    int val[100];
    int siz;

    heap_max(){
        siz = 0;
    }

    int get_max(){
        return val[0];
    }

    void add(int x){
        int i = siz;
        siz++;
        val[i] = x;
        int p = (i - 1)/2;
        while( i and val[i] > val[p]){
            swap(val[i], val[p]);
            i = p;
            p = (i - 1)/2;
        }
    }

    void print(){
        for (int i = 0; i < siz; ++i) {
            cout << val[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    int n, m, i, x;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; ++j) {
        cin >> a[j];
    }
    cin >> m;
    for (int j = 0; j < m; ++j) {
        cin >> i >> x;
        for (int k = 0; k < n; ++k) {
            if(k+1 == i){
                a[k] += x;
            }
        }
    }
    heap_max hp;
    for (int j = 0; j < n; ++j) {
        hp.add(a[j]);
    }

    hp.print();
}

