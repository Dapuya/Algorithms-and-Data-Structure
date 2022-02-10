#include "iostream"
#include <vector>
#include "queue"

using namespace std;
int d[25][25];
int n;
pair<int,int> p[25][25];

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> g[n];
    vector <int> import;
    queue<pair<int,int>>q;
    int x;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            if ( x == 1){
                q.push({i, j});
            }
        }
    }



    return 0;
}



//  0 1 2
//  0 0 1    0
//  1 0 0    1

//  1 1 0
//  0 1 1