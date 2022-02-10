#include "iostream"
#include "vector"
#include "queue"
#include "map"
#include "algorithm"


using namespace std;

int main(){
    int n;
    cin >> n;
    string first, array, second;
    map<string, vector< string>> ma;

    for (int i = 1; i <= n ; ++i) {
        cin >> first >> array >> second;
        ma[first].push_back(second);
    }

    string start, end;
    cin >> start >> end;

    queue<string> q;
    q.push(start);
    vector<int> d(n), p(n);
    vector<bool> used(n);

    while (!q.empty()){
        string v = q.front();
        q.pop();

        for (int i = 0; i < ma[v].size(); ++i) {
            string to = ma[v][i];
            if(!used[to]){
                used[to] = true;
                q.push(to);
                d[to] = d[v] + 1;
                p[to] = v;
            }

        }
    }

    return 0;
}