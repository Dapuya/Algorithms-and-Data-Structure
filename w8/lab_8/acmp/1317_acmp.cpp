#include "iostream"

using namespace std;
char a[500][500];
bool used[500][500];
int n, m, cnt = 0;
bool ans;
char c = '1';
void dfs (int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '.') return;
    if (used[i][j]) return;
    if(a[i][j] == '#'){
        used[i][j] = true;
    }
    a[i][j] = c;
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
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!used[i][j] && a[i][j] != '.'){
                dfs(i, j);
                k++;
            }
        }
    }
    cout << k << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
    return 0;
}