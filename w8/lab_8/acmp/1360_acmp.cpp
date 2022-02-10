#include "iostream"
#include "vector"

using namespace std;
vector<long long > g[100000];
bool used[100000];
long long cnt = 0;
vector<long long > vertices[100000];

void dfs(int v){
    if (used[v]) return;
    used[v] = true;
    vertices[cnt].push_back(v);
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to);
    }
}

int main(){
    long long n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; ++i) {
        if(!used[i]){
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;

    for (int i = 0; i < cnt; ++i) {
        cout << vertices[i].size() << endl;
        for (int j = 0; j < vertices[i].size(); ++j) {
            cout << vertices[i][j] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}