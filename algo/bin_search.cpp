#include "iostream"
using namespace std;

int bin(int arr[], int l, int r, int x ){
    while( l <= r){
        int m = l + (r-l) / 2;
        if(arr[m] == x ) return m;
        if(arr[m] < x){
            l = m + 1;
        }
        else{
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
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof (int);
    int x;
    cin >> x;
    cout << bin_recursion(arr, 0, n-1, x);
    return 0;
}
