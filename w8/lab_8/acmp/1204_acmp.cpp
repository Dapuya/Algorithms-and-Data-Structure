#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int usl = 0, diagonal = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j] != a[j][i]) {
                usl = 1;
            }
            if(i == j and a[i][j] == 1) {
                diagonal = 1;
            }
        }
    }

    if(usl == 1 and diagonal == 0) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}