#include "iostream"

using namespace std;

int main(){
    long long n, cnt;
    cin >> n;
    long long a, b;
    cin >> a >> b;
    while(a != b){
        if(b > a) b /= 2;
        else a /= 2;
    }
    cout << a << endl;

    return 0;
}

