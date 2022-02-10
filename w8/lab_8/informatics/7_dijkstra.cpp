#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;
const int INF = 10e6;
bool used[150];


int main(){
    int n, x, y;
    cin >> n;
    vector<pair <int, int>> g[n+5];
    int values[n];
    for (int i = 1; i <= n; ++i) {
        cin >> values[i];
    }

    int m;
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> x >> y;
        g[x].push_back({y, values[x]});
        g[y].push_back({x, values[y]});
    }

    vector <int> d(n+5, INF);

    d[1] = 0;

    for (int i = 1; i <= n; ++i) {
        int mn = INF + 1;
        int v;
        for (int j = 1; j <= n; ++j) {
            if(!used[j] && d[j] < mn){
                mn = d[j];
                v = j;
            }
        }

        if(d[v] == INF) break;
        used[v] = true;

        for (int i = 0; i < g[v].size(); ++i) {
            int to = g[v][i].first;
            int distance = g[v][i].second;
            if(d[v] + distance < d[to]){
                d[to] = d[v] + distance;
            }
        }
    }


    if( !used[n] ){
        cout << -1 << endl;
    }else{
        cout << d[n] << endl;
    }

    return 0;
}