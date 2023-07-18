#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int INF = 1e9;

vector<pair<int, int>> adj[1000];
int dist[1000];

void dijkstra(int start) {
    memset(dist, INF, sizeof(dist));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto v : adj[u]) {
            int cost = v.second;
            if (dist[u] + cost < dist[v.first]) {
                dist[v.first] = dist[u] + cost;
                pq.push({dist[v.first], v.first});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int start;
    cin >> start;
    dijkstra(start);
    for (int i = 1; i <= n; i++) {
        cout << "Shortest distance from " << start << " to " << i << " is " << dist[i] << "\n";
    }
    return 0;
}