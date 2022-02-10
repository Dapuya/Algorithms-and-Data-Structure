#include "iostream"

using namespace std;
char a[500][500];
bool used[500][500];
int n, m;

void dfs (int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (used[i][j]) return;
    if (a[i][j] == '#') return;
    if(a[i][j] == '.'){
        used[i][j] = true;
    }
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i, j - 1);
    dfs(i + 1, j);
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    dfs(0, 0);
//    for (int i = 0; i < n; i ++){
//        for (int j = 0; j < m; j++){
//            cout << used[i][j] << " ";
//        }
//        cout << endl;
//    }
    if (used[n - 1][m - 1]){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

//    used[n - 1][m - 1] ? cout << "YES" : cout << "NO";

    return 0;
}




//    .###        1000
//    ..##        1100
//    #..#        0110
//    .#.#        0010
//    .#..        0011