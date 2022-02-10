#include "iostream"
#include "vector"

using namespace std;
vector<long long > g[100000];
bool used[100000];
long long cnt = 0;
vector<long long > vertices[100000];
long long n, m;
vector <pair<int, int>> res[10000];

void dfs(int v){
    if (used[v]) return;
    used[v] = true;
    vertices[cnt].push_back(v);
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to);
    }
}

void delEdge(vector<int> adj[], int u, int v){
    int i = 1;
    for (int i = 0; i < adj[u].size(); i++) {
        if (adj[u][i] == v) {
            adj[u].erase(adj[u].begin() + i);
            break;
        }
    }
    for (int i = 0; i < adj[v].size(); i++) {
        if (adj[v][i] == u) {
            adj[v].erase(adj[v].begin() + i);
            break;
        }
    }
    if (!used[i]) {
        dfs(i);
        cnt++;
    }
    cout << cnt << endl;
    i++;
    n--;
}



int main(){
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
        res[i].push_back({x, y});
    }

    while(n!=0) {
        int j = 0;
        delEdge(g, res[j].first, res[j].second);
    }

    return 0;
}