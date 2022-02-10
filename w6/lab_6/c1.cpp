#include "iostream"
#include "vector"
#include "string"

using namespace std;

vector<int> prefix_function(string s) {
    int n = s.length();
    vector<int> pi (n);
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
    string s, t;
    bool ansl = true;
    cin >> s >> t;
    string st = s + '#' + t + t;
    vector<int> p = prefix_function(st);
    for (int i = 0; i < st.size(); ++i) {
        if(p[i] == t.size() ){
            cout << i - 2 * t.size() << endl;
            ansl = false;
            break;
        }
    }
    if(ansl == true){
        cout << -1 << endl;
    }
    return 0;
}



//    zabcd#abcdz//
// Created by Dariya on 06.11.2021.
//

