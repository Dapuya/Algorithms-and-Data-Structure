#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        int u,v;
        cin >> u;
        if(u!=0) {
            for (int j = 0; j < u; ++j) {
                cin >> v;
                v--;
                a[i][v] = 1;
            }
        }
    }

    cout << n << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

