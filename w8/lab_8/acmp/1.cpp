#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
vector<int> g[500];
bool used[500];

void dfs(int v){
    if (used[v]) return;
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++){
        int to = g[v][i];
        dfs(to);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i ++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    for (int i = 0; i < n; i ++){
        cout << "Vertex " << i << "   ";
        for (int j = 0; j < g[i].size(); j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

