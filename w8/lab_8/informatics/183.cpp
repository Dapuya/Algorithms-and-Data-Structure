#include "iostream"
#include "vector"
#include <algorithm>

using namespace std;
vector <int> p (105);


int dsu_get(int v){
    if( v == p[v]) return v;
    return p[v] = dsu_get(p[v]);
}

void dsu_unite(int a, int b){
    a = dsu_get(a);
    b = dsu_get(b);
    if(rand() & 1) {
        swap(a, b);
    }
    if(a != b){
        p[a] = b;
    }
}

int main(){

    int n, x;
    cin >> n;
    vector<pair<int , pair<int, int>>>()
    for (int i = 0; i < n; ++i) {
        cin >> x;

    }

    return 0;
}