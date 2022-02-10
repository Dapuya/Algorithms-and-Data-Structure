#include "iostream"
#include "set"

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n ; ++j) {
            cin >> a[i][j];
        }
    }

    set <int> st;
    int curr = 0, temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n ; ++j) {
            if(a[i][j] == 1)curr++;
        }
        st.insert(curr);
        curr = 0;
    }

    if(st.size() == 1 ) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
