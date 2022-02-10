#include "iostream"
#include "set"

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

    void del(){
        val[0] = val[--siz];
        int i = 0;
        while(2 * i + 1 < siz){
            int c1 = 2 * i + 1;
            int c2 = 2 * i + 2;
            int mp = c1;
            if(c2 < siz){
                if(val[c2] < val[c1]){
                    mp = c2;
                }
            }

            if(val[i] > val[mp]){
                swap(val[i], val[mp]);
                i = mp;
            }else{
                break;
            }
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
//    heap_min hp;
//    hp.add(1);
//    int n, cur;
//    cin >> n;
//    while(n-- > 0){
//        cur = hp.get_min();
//        hp.del();
//        hp.add(cur * 2);
//        hp.add(cur * 3);
//        hp.add(cur * 5);
//    }
//
//    cout << hp.get_min() << endl;

    set<int> s;

    s.insert(1);

    int n, cur = -1;

    cin >> n;

    while(n-- > 0){
        cur = *s.begin();
        s.erase(s.begin());
        s.insert(cur * 2);
        s.insert(cur * 3);
        s.insert(cur * 5);
    }

    cout << cur << endl;

    return 0;
}
