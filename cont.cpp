#include <bits/stdc++.h>
using namespace std;

bool ab(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 2; ++i) {
        int mx = max({a[i], a[i+1], a[i+2]});
        int mn = min({a[i], a[i+1], a[i+2]});
        unordered_set<int> s = {a[i], a[i+1], a[i+2]};
        int mex = 0;
        while (s.count(mex)) mex++;
        if (mex != mx - mn) return false;
    }
    return true;
}

bool cd (vector<int>& a) {
    int n = a.size();
    bool has_neg = false;
    for (int x : a) {
        if (x == -1) {
            has_neg = true;
            break;
        }
    }
    if (!has_neg) return ab(a);
    
    int first_non_neg = -1;
    for (int x : a) {
        if (x != -1) {
            first_non_neg = x;
            break;
        }
    }
    
    if (first_non_neg == -1) {
        for (int& x : a) x = 1;
        return true;
    }
    
    for (int& x : a) {
        if (x == -1) x = first_non_neg;
    }
    
    return ab(a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << (cd (a) ? "YES" : "NO") << endl;
    }
}