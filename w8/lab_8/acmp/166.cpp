#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>g[100000];
vector<int>visited(100000);
bool used[100000];
vector<int>rr;
const int NEW = 0;
const int DURING = 1;
const int VISITED = 2;


void delEdge(vector<int> adj[], int u, int v){
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
}

void dfs(int v){
    visited[v] = DURING;
    for(int i=0;i<g[v].size();i++){
        int to = g[v][i];
        if(visited[to] == NEW){
            dfs(to);
        }
        else if(visited[to] == DURING){
            cout << "Impossible" << endl;
            exit(0);
        }
    }
    visited[v] = VISITED;
    rr.push_back(v);
}


int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]) dfs(i);
    }

    cout << "Possible" << endl;
    reverse(rr.begin(),rr.end());
    for(int i=0;i<rr.size();i++){
        cout << rr[i] << " " ;
    }
    return 0;
}