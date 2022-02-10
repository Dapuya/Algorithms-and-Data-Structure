#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e8;

int a[405][405];
int b[405][405];

int main() {
    int n, m;
    vector<int> g[405];
    vector<int> g1[405];
    cin >> n >> m;
    for (int i = 0; i < m; i ++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        a[u][v] = 1;
        a[v][u] = 1;
    }

    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            if (a[i][j] == 0 && i != j){
                b[i][j] = 1;
                g1[i].push_back(j);
            }
        }

    }


    int s = 1, to;
    queue<int> q;
    queue<int> q1;
    q.push(s);
    q1.push(s);
    vector<bool> used (n + 10);
    vector<bool> used1 (n + 10);
    vector<int> d (n + 10), d1 (n + 10);
    used[s] = true;
    used1[s] = true;

    while(true){
        if (!q.empty()){
            int v = q.front();
            q.pop();
            for (int i=0; i<g[v].size(); ++i) {
                int to = g[v][i];
                if (!used[to]) {
                    used[to] = true;
                    q.push (to);
                    d[to] = d[v] + 1;
                }
            }
        }

        if (!q1.empty()){
            int v1 = q1.front();
            q1.pop();
            for (int i=0; i<g1[v1].size(); ++i) {
                int to = g1[v1][i];
                if (!used1[to]) {
                    used1[to] = true;
                    q1.push (to);
                    d1[to] = d1[v1] + 1;
                }
            }
        }

        if (q.empty() && q1.empty()) break;
    }

    if (!used[n] || !used1[n]){
        cout << -1 << endl;
    }

    else {
        cout << max(d[n], d1[n]);
    }
}
