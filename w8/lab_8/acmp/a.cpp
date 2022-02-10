#include <iostream>
#include "vector"

using namespace std;
const int INF = 10e9+10;

long long bin(int *a, long long n, long long k) {
    long long left = 0, right = INF;
    while (left < right) {
        long  long cnt = 1, sum =0;
        long  long middle = (left + right) / 2;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if(middle < a[i]){
                cnt = k + 1;
            }
            if (sum  > middle) {
                sum = a[i];
                cnt++;
            }
        }

        if (k < cnt) {
            left = middle + 1;
        }
        else {
            right = middle;
        }
    }
    return right;
}


int main(){
    long  long n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << bin(a, n , k);

    return 0;
}