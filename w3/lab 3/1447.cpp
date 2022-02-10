#include "iostream"

using namespace std;

int main(){
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int mx = 0, mn = 90;
    for (int i = 0; i < n; ++i) {
        if(mx < a[i]){
            mx = a[i];
        }
        if(mn > a[i]){
            mn = a[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if(a[i] == mx){
            a[i] = mn;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}