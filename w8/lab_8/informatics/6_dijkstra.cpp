#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;
const int INF = 10e6;
bool used[150];

int main(){
    int n, f, s;
    cin >> n >> s >> f;
    s--;
    f--;
    vector<pair <int, int>> g[n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if(x != -1 && x != 0){
                g[i].push_back({j, x});
            }
        }
    }

    vector <int> d(n);

    for (int i = 0; i < n; ++i) {
        d[i] = INF;
    }
    d[s] = 0;
    vector<int> p(n);
    p[s] = -1;

    for (int i = 0; i < n; ++i) {
        int mn = 10000000;
        int v;
        for (int j = 0; j < n; ++j) {
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
                p[to] = v;
            }
        }
    }

   if(used[f]){
       vector<int> path;
       for (int i = f; i != -1; i = p[i]) {
           path.push_back(i+1);
       }
       reverse(path.begin(), path.end());
       for (auto i : path){
           cout << i <<" ";
       }
   }else{
       cout << -1 << endl;
   }
    return 0;
}
