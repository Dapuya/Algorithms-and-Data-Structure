#include "iostream"
#include "vector"

using namespace std;

int n, m, k, cnt;
vector<int> g[1500];
vector<int> capitals[1500];
vector <int> isCapital(1500, 0);
int used[1500];

void dfs(int v, int c){
    if(used[v]) return;
    if(v != c and isCapital[v] == 1) return;

    used[v] = true;
    capitals[c].push_back(v);
    for (int i = 0; i < g[v].size(); i ++){
        int to = g[v][i];
        dfs(to, c);
    }
}

int main(){
    cin >> n >> m;
    int x, y, c;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> c;
        c--;
        isCapital[c] = 1;
    }

    for (int i = 0; i < 1500; ++i) {
        if(isCapital[i] == 1){
            dfs(i, i);
        }
    }


    for (int i = 0; i < 1500; ++i) {
        if(isCapital[i] == 1) {
            cout << capitals[i].size() << endl;
            for (int j: capitals[i]) {
                cout << j + 1 << " ";
            }
            cout << endl;
        } else continue;
    }

    return 0;
}
