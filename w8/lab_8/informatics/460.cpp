#include "iostream"

using namespace std;

int main(){
    int n, x;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j and a[i][j] != 0){
                cout << "NO" << endl;
                return 0;
            }
            if(a[i][j] != a[j][i] and a[i][j] == 1){
                cout << "NO" << endl;
                return 0;
            }
            if(a[i][j] != a[j][i] and a[j][i] == 1){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}