#include "iostream"

using namespace std;

int gcd(int n, int m){
    if(n%m == 0){
        return m;
    }
    return gcd(m%n, n);
}

int main(){
    int n,m;
    cin >> n;
    cin >> m;
    cout << gcd(n, m) << endl;
    return 0;
}

