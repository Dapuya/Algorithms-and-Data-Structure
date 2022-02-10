#include "iostream"
#include "vector"
#include "string"

using namespace std;
vector<int> pi (100000);

vector<int> prefix_function(string s) {
    int n = s.length();
    pi.resize(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])  j++;
        pi[i] = j;
    }
    return pi;
}

int main(){
    int n, k, x, cnt = 1;
    string s, st ="";
    cin >> n;
    vector <int> sizes(n);
    for (int i = 0; i < n; ++i) {
        cin >> s >> k;
        vector<int> temp = prefix_function(s);
        if(temp[s.size()-1] == 0){
            sizes.push_back(s.size()*k);
        }else{
            int x = s.size() + (s.size() - temp[s.size()-1]) *(k-1);
            sizes.push_back(x);
        }
    }

    for (int i = 0; i < sizes.size(); ++i) {
        if(sizes[i] != 0) {
            cout << sizes[i] << endl;
        }
    }


    return 0;
}