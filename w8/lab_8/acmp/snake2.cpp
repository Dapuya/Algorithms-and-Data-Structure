#include "iostream"

using namespace std;
char a[500][500];
bool used[500][500];
int n, m, cnt = 0;


void dfs (int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '.') return;
    if (used[i][j]) return;
    if(a[i][j] == '#'){
        used[i][j] = true;
        cnt++;
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

    int x,y;
    cin >> x >> y;
    dfs(x - 1, y - 1);
    cout << cnt;


    return 0;
}




//5 4
//.##.
//..#.
//#..#
//#..#
//##..
//1 4

