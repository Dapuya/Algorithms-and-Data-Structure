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
    string s;
    cin >> s;
    int k;
    vector<int> p = prefix_function(s);
    k = s.size() - p[s.size()-1];
    if(s.size() % k == 0 ){
        cout << s.size() / k;
    }else{
        cout << 1;
    }

    return 0;
}

