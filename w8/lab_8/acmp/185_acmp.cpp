#include "iostream"
#include "vector"

using namespace std;

vector<int> g[105];
bool used[105];
int cnt;

void dfs(int v){
    if (used[v]) return;
    used[v] = true;

    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to);
    }
}

int main(){
    int n, k, x, y;
    cin >> n >> k;
    while (true){
        cin >> x;
        if(x == 0){
            break;
        }
        cin >> y;
        g[x].push_back(y);
    }
    dfs(k);
    for (int i = 1; i <= n; ++i) {
        if(!used[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}