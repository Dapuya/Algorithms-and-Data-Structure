#include "iostream"

using namespace std;

bool bin(int arr[], int l, int r, int x ){
    while( l <= r){
        int m = l + (r-l) / 2;
        if(arr[m] == x ) return true;
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int j = 0; j < m; ++j) {
        cin >> b[j];
    }
//
//    for (int j = 0; j < m; ++j) {
//        if( bin(a, 0, n -1, b[j])){
//            cout << "YES" << endl;
//        }else{
//            cout << "NO" << endl;
//        }
//    }


    return 0;
}
