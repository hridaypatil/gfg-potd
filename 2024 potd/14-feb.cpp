class Solution {
public:
    int timer = 0;
    vector<vector<int>> ans;
    vector<int> vis, dis, low;

    void dfs(int node, int parent, vector<int> adj[]) {
        ++timer;
        vis[node] = 1;
        dis[node] = low[node] = timer;
        for (auto it : adj[node]) {
            if (it == parent)
                continue;
            else if (!vis[it])
                dfs(it, node, adj);

            low[node] = min(low[node], low[it]);
            if (low[it] > dis[node])
                ans.push_back({min(it, node), max(it, node)});
        }
    }

    vector<vector<int>> criticalConnections(int v, vector<int> adj[]) {
        vis = vector<int>(v, 0);
        dis = low = vector<int>(v, -1);
        for (int i = 0; i < v; i++) {
            if (vis[i] == 0)
                dfs(i, -1, adj);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
