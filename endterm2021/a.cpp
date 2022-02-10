#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 2009000999;
const int INF = 1e9;


const int N = 2e5;
vector <vector <pair<int, int>> > g(N);
int n, m;

int Dijkstra(int s, int f) {
    vector<int> d (n + 10, INF),  p (n + 10);
    d[s] = 0;
    priority_queue < pair<int,int> > q;
    q.push (make_pair (0, s));

    while (!q.empty()) {
        int v = q.top().second,  cur_d = -q.top().first;
        q.pop();
        if (cur_d > d[v])  continue;

        for (int j=0; j<g[v].size(); ++j) {
            int to = g[v][j].first,
                    len = g[v][j].second;
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push (make_pair (-d[to], to));
            }
        }
    }

    return d[f];
}


int main(){
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int v, u, c;
        cin >> v >> u >> c;
        g[v].push_back({u, c});
        g[u].push_back({v, c});
    }

    int merchant, pharmacy, v1, v2;
    cin >> merchant >> pharmacy >> v1 >> v2;

    auto res1 = Dijkstra(merchant, pharmacy);
    auto res2 = Dijkstra(pharmacy, v1);
    auto res3 = Dijkstra(v1, v2);
    auto res4 = Dijkstra(merchant, v1);
    auto res5 = Dijkstra(v1, pharmacy);
    auto res6 = Dijkstra(pharmacy, v2);

    int total = min(res1 + res2 + res3, res4 + res5 + res6);

    if ((res1 == INF || res2 == INF || res3 == INF) && (res4 == INF || res5 == INF || res6 == INF)){
        cout << -1 << endl;
    }else {
        int total = min(res1 + res2 + res3, res4 + res5 + res6);
        cout << total << endl;
    }



    return 0;
}