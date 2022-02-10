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
    return -1;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    vector<int>::iterator iter;
    for (iter = ans.begin(); iter != nums2.end(); ++iter) {
        if (bin(nums1, *iter) != -1) {
            ans.push_back(*iter);
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector <int> nums2 = {2,2};
    vector<int>::iterator iter;
    vector <int> in = intersection(nums1, nums2);
    for (iter = in.begin(); iter != in.end(); iter++) {
        cout << *iter << ' ';
    }

    return 0;
}