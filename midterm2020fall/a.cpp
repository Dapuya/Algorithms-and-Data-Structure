#include "iostream"
#include "vector"

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
    int cnt = 0;
    vector<int> p = prefix_function(s);
//    for (int i = 0; i < s.size(); ++i) {
//        if(p[i]/2 == 1 && p[i] != 0 && p[s.size() - i]){
//            cnt++;
//        }
//    }

    for (int i = 1; i < p.size() - 1; i+=2){
        if (((i + 1) / 2) % (i + 1 - p[i]) == 0){
            cnt++;
        }
    }


    cout << cnt << endl;
    return 0;
}