#include <iostream>
#include <vector>

using namespace std;

int a_end, start;
int par[505], pers[505], arr[505][505];;
vector<int> g[555];


bool dfs (int v) {
    par[v] = 1;
    for (int i=0; i<g[v].size(); ++i) {
        int to = g[v][i];
        if(arr[v][to] == 1) continue;
        if (par[to] == 0) {
            pers[to] = v;
            if (dfs (to)){
                return true;
            }
        }
        else if (par[to] == 1) {
            a_end = v;
            start = to;
            return true;
        }
    }
    par[v] = 2;
    return false;
}

int main() {
    int n, m, x, y;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        g[x].push_back(y);
    }

    start = -1;

    for(int i = 1; i <= n; ++i){
        if(dfs(i)){
            break;
        }
    }

    if(start == -1){
        cout << "YES";
        return 0;
    }

    vector<int> vect;
    vect.push_back(start);

    for (int v=a_end; v!=start; v=pers[v]){
        vect.push_back (v);
    }

    pers[vect[0]] = vect[1];


    for(int x = 0; x < vect.size(); ++x){
        arr[pers[vect[x]]][vect[x]] = 1;
        int u = pers[vect[x]], v = vect[x];


        for(int i =1 ; i <= n; ++i){
            pers[i] = 0;
        }
        for(int i =1 ; i <= n; ++i)
            par[i] = 0;

        start = -1;
        a_end = 0;

        for(int i = 1; i <= n; ++i){
            if(dfs(i))
                break;
        }
        if(start == -1){
            cout << "YES";
            return 0;
        }
        arr[u][v] = 0;
    }
    cout << "NO";
}
