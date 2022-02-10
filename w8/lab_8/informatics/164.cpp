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
    int n, s, x;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if(x == 1){
                g[i].push_back(j);
            }
        }
    }
    s--;
    dfs(s);
    cout << cnt;



    return 0;
}