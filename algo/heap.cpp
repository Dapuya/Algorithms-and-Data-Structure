#include "iostream"

using namespace std;

struct heap_min{
    int val[100];
    int siz;

    heap_min(){
        siz = 0;
    }

    int get_min(){
        return val[0];
    }

    void add(int x){
        int i = siz;
        siz++;
        val[i] = x;
        int p = (i - 1)/2;
        while( i and val[i] < val[p]){
            swap(val[i], val[p]);
            i = p;
            p = (i - 1)/2;
        }
    }

    void del(int x){
        if(x >= 0 and x < siz){

        }
    }

    void print(){
        for (int i = 0; i < siz; ++i) {
            cout << val[i] << " ";
        }
        cout << endl;
    }
};

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
    int arr[] = {1, 6, 8, 8, 7, 12, 9};
    int n = sizeof (arr) / sizeof (int);
    heap_max hp;
    for (int i = 0; i < n; ++i) {
        hp.add(arr[i]);
    }
    hp.print();

    hp.add(0);
    cout << hp.get_max() << endl;
    hp.print();
    return 0;
}

