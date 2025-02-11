#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int node, int parent, const vector<vector<int>>& tree, vector<int>& subtree_sizes) {
    subtree_sizes[node] = 1; // Every node is initially its own subtree
    for (int neighbor : tree[node]) {
        if (neighbor != parent) { // Avoid revisiting the parent node
            dfs(neighbor, node, tree, subtree_sizes);
            subtree_sizes[node] += subtree_sizes[neighbor];
        }
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of vertices in the tree
        cin >> n;

        vector<vector<int>> tree(n + 1); // Adjacency list representation of the tree

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        vector<int> subtree_sizes(n + 1, 0);
        dfs(1, -1, tree, subtree_sizes); // Compute subtree sizes starting from node 1

        int max_components = 0;

        for (int i = 1; i <= n; i++) {
            for (int j : tree[i]) {
                if (subtree_sizes[j] < subtree_sizes[i]) { // Ensure j is a child of i
                    // Removing node i and node j
                    int components = subtree_sizes[j];
                    int remaining = n - subtree_sizes[j];
                    max_components = max(max_components, components + remaining - 1);
                }
            }
        }

        cout << max_components << endl;
    }

    return 0;
}
