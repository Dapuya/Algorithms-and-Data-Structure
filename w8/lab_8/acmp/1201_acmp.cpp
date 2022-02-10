#include "iostream"

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j] == 1) {
                cnt++;
            }
        }
    }

    cout << n << " " << cnt << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j] == 1){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }

    return 0;
}
