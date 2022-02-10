#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector <int> g[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> x;
            if(x == 1){
                g[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < g[i].size(); ++j) {
            cout << i+1  << " " << g[i][j] << endl;
        }
    }

    return 0;
}

