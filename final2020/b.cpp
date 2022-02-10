#include "iostream"
#include "vector"
#include "queue"
#include "algorithm"

using namespace std;
const int INF = 10e9;
vector <int> g[100120];

int main(){
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= 1000; ++i) {
        g[i].push_back(i*2);
        g[i].push_back(i-1);
    }

    vector<int> d (100120), p (100120);

    for (int i = 0; i < 100120; ++i) {
        p[i] = -1;
        d[i] = INF;
    }

    queue<int> q;
    d[a] = 0;
    q.push(a);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for (auto to : g[v]){
            if (d[to] > d[v] + 1) {
                p[to] = v;
                d[to] = d[v] + 1;
                q.push(to);
            }
        }
    }

    vector <int> path;
    cout << d[b] << endl;
    while(a != b){
        path.push_back(b);
        b = p[a];
    }
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i] <<" ";
    }

    return 0;
}