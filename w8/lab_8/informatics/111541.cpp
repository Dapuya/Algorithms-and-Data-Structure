#include "iostream"
#include "vector"

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
    int n, x, edges = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if(x == 1){
                g[i].push_back(j);
                edges++;
            }
        }
    }

    dfs(0);
    edges /= 2;
    if(cnt == n and edges == n-1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}