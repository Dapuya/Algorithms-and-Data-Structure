#include <iostream>

using namespace std;



int main() {
    long long n;

    string s, t;
    cin >> s >> t;
    string new_t = t + t;
    n = new_t.size();
    long long hs[n], p_pow[n];
    long long p = 5;
    p_pow[0] = 1;
    for (int i = 1; i < n; i++) {
        p_pow[i] = p_pow[i - 1] * p;
    }

    for (int i = 0; i < n; i++) {
        hs[i] = (new_t[i] - 'a' + 1) * p_pow[i];
        if (i) hs[i] += hs[i - 1];
//        cout << hs[i] << " ";
    }
//    cout << endl;
//    cout << new_t << endl;
    long long h_t = 0;

    for (int i = 0; i < s.size(); i++) {
        h_t += (s[i] - 'a' + 1) * p_pow[i];
    }
//    cout << h_t << endl;

    for (int i = 0; i + s.size() - 1 < n; i++) {
        long long cur = hs[i + s.size() - 1];
        if (i) cur -= hs[i - 1];
//        cout << cur << endl;
        if (h_t * p_pow[i] == cur) {
            cout << i  << endl;
            return 0;
        }

    }
    cout << -1<< endl;
    return 0;
}