#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 200001;
vector<int> adj[MAXN];  // Adjacency list for cactus graph
pair<int, int> position[MAXN];  // Position on the grid for each vertex
bool visited[MAXN];  // Visited array for DFS
int parent[MAXN];  // Parent array for cycle detection

// Function to detect a cycle using DFS
bool detectCycle(int v, int p, vector<int>& cycle) {
    visited[v] = true;
    parent[v] = p;

    for (int u : adj[v]) {
        if (u == p) continue;  // Skip the edge to parent
        if (visited[u]) {
            // Cycle found, reconstruct it
            cycle.push_back(u);
            for (int x = v; x != u; x = parent[x]) {
                cycle.push_back(x);
            }
            cycle.push_back(u);
            return true;
        } else {
            if (detectCycle(u, v, cycle)) return true;
        }
    }
    return false;
}

// Function to embed a cycle in the grid
bool embedCycle(vector<int>& cycle) {
    int len = cycle.size();
    if (len > 400002) return false;  // The cycle is too large to fit in the grid

    int half_len = len / 2;
    for (int i = 0; i < half_len; ++i) {
        position[cycle[i]] = {0, i};
        position[cycle[i + half_len]] = {1, i};
    }

    if (len % 2 == 1) {
        position[cycle[half_len]] = {1, half_len};
    }

    return true;
}

// Function to embed tree structures using BFS
bool bfsEmbed(int start) {
    queue<pair<int, pair<int, int>>> q;
    q.push({start, {0, 0}});
    position[start] = {0, 0};

    while (!q.empty()) {
        int v = q.front().first;
        int row = q.front().second.first;
        int col = q.front().second.second;
        q.pop();

        for (int u : adj[v]) {
            if (position[u].first == -1) {
                if (col + 1 > 400000) return false;  // Out of grid bounds
                position[u] = {(row + 1) % 2, col + 1};
                q.push({u, position[u]});
            }
        }
    }
    return true;
}

// Main function to check if embedding is possible
bool canEmbed(int n) {
    memset(visited, 0, sizeof(visited));
    fill(position, position + n + 1, make_pair(-1, -1));

    vector<int> cycle;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cycle.clear();
            if (detectCycle(i, -1, cycle)) {
                if (!embedCycle(cycle)) return false;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (position[i].first == -1) {
            if (!bfsEmbed(i)) return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }

        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < MAXN; ++i) {
            position[i] = make_pair(-1, -1);
        }

        if (canEmbed(n)) {
            cout << "Yes\n";
            for (int i = 1; i <= n; ++i) {
                cout << position[i].first << " " << position[i].second << "\n";
            }
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
