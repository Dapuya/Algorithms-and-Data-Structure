#include <iostream>

using namespace std;

class heap{
public:
    long long h[1000000];
    int sizee;

    heap(){
        sizee = 0;
        h[0] = -1;
    }

    int min_child(int i){
        int l,r;
        l = i * 2;
        r = i * 2 + 1;
        if(l <= sizee && r <= sizee){
            if(h[l] <= h[r])
                return l;
            else {
                return r;
            }
        }
        else if(l <= sizee) return l;
        else return -1;
    }

    void add(int x){
        sizee++;
        h[sizee] = x;
        int i = sizee;
        while (i > 1 && h[i/2] > x){
            swap(h[i/2], h[i]);
            i = i/2;
        }
    }

    void del(int pos){
        h[pos] = h[sizee];
        sizee--;
        if(pos/2 > 1 && h[pos] < h[pos/2]){
            Shift_up(pos);
        }
        else{
            Shift_down(pos);
        }
    }

    long long Shift_up(int pos){
        while(pos > 1 && h[pos / 2] > h[pos]){
            swap(h[pos / 2], h[pos]);
            pos = pos / 2;
        }
        return pos;
    }

    long long Shift_down(int pos){
        while(min_child(pos) != -1 && h[min_child(pos)] < h[pos]){
            long long mx = min_child(pos);
            swap(h[mx], h[pos]);
            pos = mx;
        }
        return pos;
    }

    long long Extract_min(){
        long long sum = h[1] + h[min_child(1)];
        h[1] = h[1] + h[min_child(1)];
        del(min_child(1));
        Shift_down(1);
        return sum;
    }
};

int main(){
    heap hp;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> x;
        hp.add(x);
    }


    long long ans = 0;
    while(hp.sizee >= 2){
        ans += hp.Extract_min();
    }
    cout << ans << endl;
    return 0;
}

