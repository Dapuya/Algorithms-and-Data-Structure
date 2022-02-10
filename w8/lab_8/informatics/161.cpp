#include<iostream>
#include<queue>

using namespace std;
int d[25][25];
int n;
pair<int,int> p[25][25];

void show(){
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            cout << d[i][j] << "\t\t";
        }
        cout << endl;
    }
}

int main() {
    queue<pair<int,int>>q;
    int x[8]={-2,-2,-1,-1,1,1,2,2};
    int y[8]={-1,1,-2,2,-2,2,-1,1};
    cin >> n;
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= n; ++j){
            d[i][j] = 100;
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    d[x1][y1] = 0;
    q.push(make_pair(x1,y1));
    p[x1][y1].first = 0;
    p[x1][y1].second = 0;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for(int k = 0; k < 8; k++){
            int u = i + x[k];
            int v = j + y[k];
            if(u > 0 && u <= n && v > 0 && v <= n && d[u][v] > d[i][j]+1){
                d[u][v] = d[i][j] + 1;
                p[u][v] = {i,j};
                q.push(make_pair(u,v));
            }
        }
    }

    int curX = x2;
    int curY = y2;
    int cnt = 0;

    vector<pair<int,int>> parents;
    parents.push_back({x2,y2});
    while(p[curX][curY].first != 0 && p[curX][curY].second != 0){
        parents.push_back({p[curX][curY].first, p[curX][curY].second});
        int tmpX = p[curX][curY].first;
        int tmpY = p[curX][curY].second;
        curX = tmpX;
        curY = tmpY;
    }

    cout << d[x2][y2] << endl;
    for (int i = parents.size() - 1; i >= 0; i --){
        cout << parents[i].first << " " << parents[i].second << endl;
    }
    return 0;
}