#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int mx = 1000000;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j ++){
            for (int k = 0; k < n; k ++){
                int ans = a[i][j] + a[j][k] + a[k][i];
//                if (i != j && j != k && k != i) cout << i << j << " " << j << k << " " << k << i << endl;
                if (i != j && j != k && k != i && ans < mx){
                    cout << i+1 << " " << j+1 << " " << k+1 << endl;
                    return 0;
                }
            }
        }
    }
//    cout << mx << endl;

    return 0;
}