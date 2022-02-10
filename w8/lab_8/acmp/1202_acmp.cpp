#include "iostream"
#include "vector"

using namespace std;

int main(){
    long long n ,m;
    cin >> n >> m;
    vector<long long > g[n];
    for (int i = 1; i <= m; ++i) {
        long long u,v;
        cin >> u >> v;
        u--;
        g[u].push_back(v);
    }

    cout << n << endl;
    for (int i = 0; i < n; ++i) {
        cout << g[i].size() << " ";
        sort(g[i].begin(), g[i].end());
        for (int j = 0; j < g[i].size(); ++j) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

