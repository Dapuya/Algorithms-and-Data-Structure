#include "iostream"

using namespace std;

int main(){
    string s, t;
    cin >> s;
    int n = s.length();

    long long hs[n], p_pow[n];
    int p = 5;
    p_pow[0] = 1;
    for (int i = 1; i <= n; i++) {
        p_pow[i] = p_pow[i - 1] * p;
    }

    for (int i = 0; i < n; i++) {
        hs[i] = (s[i] - 'a' + 1) * p_pow[i];
        if (i) hs[i] += hs[i - 1];
    }

    long long h_t = 0;

    for (int i = 0; i + t.size() - 1  < n; ++i) {
        for (int j = 0; j < n - 10; j++) {
            h_t += (s[i] - 'a' + 1) * p_pow[i];
        }
    }


    return 0;
}

//Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
//Output: ["AAAAACCCCC","CCCCCAAAAA"]