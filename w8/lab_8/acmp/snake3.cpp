#include "iostream"

using namespace std;
char a[500][500];
bool used[500][500];
int n, m, cnt = 0;
bool ans;

void dfs (int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '.') return;
    if (used[i][j]) return;
    if(a[i][j] == '#'){
        used[i][j] = true;
    }

    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i, j - 1);
    dfs(i + 1, j);
    ans = true;

}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dfs(i, j);
            if(ans == true) cnt++;
            ans = false;
        }
    }

    cout << cnt;
    return 0;
}
