#include "iostream"
#include "set"
#include "vector"
using namespace std;

vector<int> g[105];
int colors[105];
set<int> first;
set<int> ::iterator it;

//1 - blue
//2 - red
//0 - unused

void dfs (int v, int c) {
    if (colors[v] != 0){
        if (colors[v] != c){
            cout << "NO" << endl;
            exit(0);
        }
    }
    if (colors[v] == c) return;
    colors[v] = c;
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        if(c == 2){
            dfs(to, 1);
            first.insert(to);
        }
        else{
            dfs(to, 2);
        }
    }
}

int main(){
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; i ++){
        if (colors[i] == 0){
            dfs(i, 1);
        }
    }
    first.insert(1);
    cout << "YES" << endl;
    for (it = first.begin(); it != first.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}