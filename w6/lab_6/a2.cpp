#include <iostream>
using namespace std;

int main() {
    long long n;

    string s, t;
    cin >> s >> t;

    n = s.size();
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

    for (int i = 0; i < t.size(); i++) {
        h_t += (t[i] - 'a' + 1) * p_pow[i];
    }

    for (int i = 0; i + t.size() - 1 < n; i++) {
        long long cur = hs[i + t.size() - 1];
        if (i) cur -= hs[i - 1];
        if (h_t * p_pow[i] == cur) {
            cout << i << " ";
        }
    }

    return 0;
}