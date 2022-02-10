#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

vector<int> g[105];
bool used[105];
vector <int> path;
int status[105];

const int NEW = 0;
const int DURING = 1;
const int VISITED = 2;


void dfs(int v){
    status[v] = DURING;

    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        if(status[to] == NEW){
            dfs(to);
        }
        else if(status[to] == DURING){
            cout << "No" << endl;
            exit(0);
        }
    }
    status[v] = VISITED;
    path.push_back(v);
}

int main(){
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
//        g[y].push_back(x);
    }

    for (int i = 1; i <= n; ++i) {
        if(!used[i]) dfs(i);
    }

    cout << "Yes" << endl;
//    reverse(path.begin(), path.end());
//
//    for (int i = 0; i < path.size(); ++i) {
//        cout << path[i] << " ";
//    }

    return 0;
}
