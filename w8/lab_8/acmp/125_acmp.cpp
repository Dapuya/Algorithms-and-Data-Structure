#include "iostream"

using namespace std;

int main(){
    int n, cnt = 0, x;
    cin >> n;
    int a[n][n];

    int colors[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        cin >> colors[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j] == 1 and colors[i] != colors[j]) cnt++;
        }
    }

    cout << cnt/2;
    return 0;
}

//7
//0 1 0 0 0 1 1
//1 0 1 0 0 0 0
//0 1 0 0 1 1 0
//0 0 0 0 0 0 0
//0 0 1 0 0 1 0
//1 0 1 0 1 0 0
//1 0 0 0 0 0 0
//
//1 1 1 1 1 3 3