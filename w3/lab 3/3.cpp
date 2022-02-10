#include "iostream"
#include "cmath"

using namespace std;

int bin(int arr[], int l, int r, int x ){
    int cnt = 0;
    while( l <= r){
        cnt++;
        int m = l + (r-l) / 2;
        if(arr[m] == x ) {
            return cnt;
        }
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return cnt;
}

int f()
{
    static int i;
    return ++i;
}


int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }
    cout << bin(a, 1, n, n) << endl;

//    int n;
//    cin >> n;
//    double o = log2(n);
//    cout << ceil(o) << endl;

    return 0;
}

