#include "iostream"
#include "vector"
#include "set"

using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector <int> v;
    int mx = -1000;
    int mx2 = -999;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if(mx < x) mx = x;
       v.push_back(x);
    }

    for (int i = 0; i < n; ++i){
        if(v[i] != mx){
            if(v[i] > mx2){
                mx2 = v[i];
            }
        }
    }

    cout << mx2 << endl;

    return 0;
}
