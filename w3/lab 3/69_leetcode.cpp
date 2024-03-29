#include "iostream"
using namespace std;


int mySqrt(int x){

    int l = 0;
    int r = x;
    long long ans;
    while(l <= r){
        long long mid = l + (r-l)/2;
        if( mid * mid == x) return mid;
        else if(mid * mid < x){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
    int x = 8;
    cout << mySqrt(x);
    return 0;
}
