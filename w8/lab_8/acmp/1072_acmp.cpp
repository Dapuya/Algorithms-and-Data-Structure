#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> g[n];
    for (int i = 1; i < n; ++i) {
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
         if(g[i].size() > 1) cnt++;
    }

    cout << cnt;
    return 0;
}
