#include "..\..\common.h"


void dfs(vector<vector<int>>& graph, int node, vector<bool>& seen) {
    for (int nbr : graph[node]) {
        if (!seen[nbr]) {
            seen[nbr] = true;
            dfs(graph, nbr, seen);
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> graph(N);
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int m;
            cin >> m;
            graph[i].push_back(m - 1);
        }
    }

    vector<bool> seen(N, false);
    seen[0] = true;
    dfs(graph, 0, seen);

    bool reachable = all_of(seen.begin(), seen.end(), [](bool value) { return value; });
    cout << (reachable ? 'Y' : 'N') << endl;

    queue<int> qu;
    seen.assign(N, false);
    qu.push(0);
    seen[0] = true;
    int step = 1;

    while (!qu.empty()) {
        int size = qu.size();
        bool found = false;
        for (int i = 0; i < size; i++) {
            int node = qu.front();
            qu.pop();
            if (graph[node].empty()) {
                found = true;
                break;
            }

            for (int nbr : graph[node]) {
                if (!seen[nbr]) {
                    seen[nbr] = true;
                    qu.push(nbr);
                }
            }
        }

        if (found) {
            cout << step << endl;
            break;
        }
        step++;
    }

    return 0;
}