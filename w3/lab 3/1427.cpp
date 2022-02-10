#include "iostream"
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int mx[750];
    int mn[750];
    int maxi = 0, mini = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[j][i] > a[maxi][i]) maxi = j;
        }
        mx[i] = a[maxi][i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(a[i][j] < a[i][mini]) mini = j;
        }
        mn[i] = a[i][mini];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(a[i][j] == mn[i] and a[i][j] == mx[j]) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}

// Седловой точкой этой матрицы назовем элемент,
// который одновременно является минимумом в своей строке и максимумом в своем столбце.