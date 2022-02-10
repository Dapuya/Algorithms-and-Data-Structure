#include "iostream"
#include "vector"
#include <cstring>

using namespace std;


int main(){
    int in[110];
    int out[110];
    memset(in, 0, sizeof(in));
    memset(out, 0, sizeof(out));
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if(x == 1){
                in[i]++;
                out[j]++;
            }
        }
    }

    int sink = 0, source = 0;
    for (int i = 0; i < n; ++i) {
        if(in[i] == 0) source++;
        if(out[i] == 0) sink ++;
    }

    cout << sink << " ";
    for (int i = 0; i < n; ++i) {
        if(out[i] == 0){
            cout << i+1 << " ";
        }
    }
    cout << endl;
    cout << source << " ";
    for (int i = 0; i < n; ++i) {
        if(in[i] == 0){
            cout << i+1 << " ";
        }
    }

    return 0;
}
