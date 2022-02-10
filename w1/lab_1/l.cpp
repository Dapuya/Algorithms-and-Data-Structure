#include "iostream"

using namespace std;

int gcd(int n, int m){
    if(n%m == 0){
        return m;
    }
    return gcd(m%n, n);
}

int main(){
    int n, k;
    cin >> n >> k;
    if(n == 0 || k == 0) {
        cout << n + k << endl;
        return 0;
    }else{
        cout << n/gcd(n,k) * k << endl;
    }
}

