#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> g[n];
    for (int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 0; i < n; ++i) {
//        cout << "Vertex " << i+1 << ":   ";
        cout << g[i].size() << " ";
//        for (int j = 0; j < g[i].size(); ++j) {
//            cout << g[i][j]+1 << " ";
//        }
//        cout << endl;
    }

    return 0;
}