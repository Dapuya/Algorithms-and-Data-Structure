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
    int n, edges = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            if (x == 1 and i != j){
                edges++;
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    edges /= 2;
    dfs(1);
    if(cnt == n && edges == n - 1){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}
