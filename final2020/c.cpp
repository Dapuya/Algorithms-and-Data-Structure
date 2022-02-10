#include "iostream"
#include "vector"
#include "queue"

using namespace std;
vector <int> g[105];
bool used[105];
int cnt;

void dfs(int v){
    if (used[v]) return;
    used[v] = true;
//    cnt++;
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to);
    }
}

int main(){
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[y].push_back(x);
        g[x].push_back(y);
    }

    for (int i = 0; i < n; ++i) {
        if(!used[i]) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt - 1 << endl;

    return 0;
}