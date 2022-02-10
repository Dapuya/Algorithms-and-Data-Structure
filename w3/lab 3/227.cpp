#include "iostream"

using namespace std;

int bin(int arr[], int l, int r, int x ){
    while( l <= r){
        int m = l + (r-l) / 2;
        if(arr[m] == x ) return m;
        if(arr[m] < x){
            l = m + 1;
        }
        else if(arr[m] > x){
            r = m - 1;
        }
    }
    return -1;
}

int bin_recursion(int arr[], int l, int r, int x){
    if(l > r) return -1;
    int m = l + (r-l) / 2;
    if(arr[m] == x) return m;
    if(arr[m] < x) return bin_recursion(arr, m+1, r, x);
    return bin_recursion(arr, l, m-1, x);
}

int main(){
    int n, ind;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int maxi = -1000;
    for (int i = 0; i < n; ++i) {
        if(a[i] > maxi){
            maxi = a[i];
            ind = i;
        }
    }

    cout << ind + 1 << endl;

    return 0;
}