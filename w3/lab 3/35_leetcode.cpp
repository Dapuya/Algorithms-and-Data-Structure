#include "iostream"
#include "vector"

using namespace std;

int bin(vector <int> &arr, int x ){
    int l = 0, r = arr.size() - 1;
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
    return l;
}

int main(){
    int target = 7;
    vector<int> a = {1, 3, 5, 6};
    cout << bin(a, target);

    return 0;
}