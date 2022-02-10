#include "iostream"
#include "set"
#include "vector"
#include "algorithm"

using namespace std;
vector <int> p (105);

int dsu_get(int v){
    if( v == p[v]) return v;
    return p[v] = dsu_get(p[v]);
}

void dsu_unite(int a, int b){
    a = dsu_get(a);
    b = dsu_get(b);
    if(rand() & 1) {
        swap(a, b);
    }
    if(a != b){
        p[a] = b;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> g;
    int cost = 0;
    vector <pair<int, int>> res;
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        g.push_back({w, {u, v}});
        g.push_back({w, {v, u}});
    }
    sort(g.begin(), g.end());

//    for (int i = 0; i < g.size(); ++i) {
//        cout << g[i].first << " " << g[i].second.first << " " << g[i].second.second << endl;
//    }

    p.resize(n);
    for (int i = 1; i <= n; ++i) {
        p[i] = i;
    }

    for (int i = 0; i < g.size(); ++i) {
        int a = g[i].second.first;
        int b = g[i].second.second;
        int l = g[i].first;

        if(dsu_get(a) != dsu_get(b)){
            cost += l;
            res.push_back(g[i].second);
            dsu_unite(a, b);
        }
    }

    cout << cost << endl;

    return 0;
}