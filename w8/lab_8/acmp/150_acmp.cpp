#include "iostream"
#include <vector>
#include <algorithm>

using namespace std;

vector<int> g[105];
bool used[105];
int cnt;

void dfs(int v){
    if (used[v]) return;
    used[v] = true;
    cnt++;
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to);
    }
}

int main(){
    int n, target;
    cin >> n >> target;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            if (x == 1){
                g[i].push_back(j);
            }
        }
    }
    dfs(target);
    cout << cnt - 1 << endl;
    return 0;
}