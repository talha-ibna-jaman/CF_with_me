#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp % 2) result = 1LL * result * base % MOD;
        base = 1LL * base * base % MOD;
        exp /= 2;
    }
    return result;
}

bool dfs(int node, int c, vector<vector<int>>& graph, vector<int>& color, int& cnt0, int& cnt1) {
    color[node] = c;
    if (c == 0) cnt0++;
    else cnt1++;
    for (int neighbor : graph[node]) {
        if (color[neighbor] == -1) {
            if (!dfs(neighbor, 1 - c, graph, color, cnt0, cnt1)) return false;
        } else if (color[neighbor] == c) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> graph(n + 1);
        vector<int> color(n + 1, -1);

        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int result = 1;

        for (int i = 1; i <= n; ++i) {
            if (color[i] == -1) {
                int cnt0 = 0, cnt1 = 0;
                if (!dfs(i, 0, graph, color, cnt0, cnt1)) {
                    result = 0;
                    break;
                }
                int ways = (power(2, cnt0) + power(2, cnt1)) % MOD;
                result = 1LL * result * ways % MOD;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
