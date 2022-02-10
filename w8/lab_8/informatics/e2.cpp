#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p (1000);

int dsu_get (int v) {
    if (v == p[v]) return v;
    return p[v] = dsu_get(p[v]);
}

void dsu_unite (int a, int b) {
    a = dsu_get (a);
    b = dsu_get (b);
    p[a] = p[b];
}


int main(){
    int n, m;
    cin >> n >> m;
    p.resize (n);
    for (int i = 1; i <=n ; i++){
        p[i] = i;
    }

    vector<int> g[n + 5];
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    vector<int> ans;

    for (int i = n; i > 1; i--){
        cnt++;
        for (int j = 0; j < g[i].size(); j++){
            int to = g[i][j];
            if (to > i){
                int a = dsu_get(i);
                int b = dsu_get(to);
                if (a != b){
                    cnt--;
                    dsu_unite(a,b);
                }
            }
        }
        ans.push_back(cnt);
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i ++){
        cout << ans[i] << endl;
    }
    cout << 0 << endl;
}
