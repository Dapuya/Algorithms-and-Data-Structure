#include "iostream"

using namespace std;

int main(){
    int n, m, x, y;
    cin >> n >> m;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x--;
        y--;
        a[x][y]++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j and a[i][j] != 0){
                cout << "NO" << endl;
                return 0;
            }
            if (i == j) continue;
            if (a[i][j] > 1){
                cout << "NO" << endl;
                return 0;
            }
            if (a[i][j] == 1 && a[j][i] != 0){
                cout << "NO" << endl;
                return 0;
            }
            if (a[i][j] == 0 && a[j][i] != 1){
//                cout << i << " " << j << endl;
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
