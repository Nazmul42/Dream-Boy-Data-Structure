#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100 + 5];
vector <int> revadj[100+5];
stack <int> s;
int color[100 + 5];

void DFS(int u) {
    color[u] = 1;

    int sz = adj[u].size();
    for(int i = 0; i < sz; ++i) {
        int v = adj[u][i];
        if(color[v] == 0) DFS(v);
    }

    color[u] = 2;
    s.push(u);
}

int main() {
    for(int i = 0; i < 100; ++i) adj[i].clear();

    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;

    cout << "Enter the number of edges: ";
    int e;
    cin >> e;

    cout << "Enter the edges: " << endl;

    while(e--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        revadj[v].push_back(u);
    }

    DFS(0);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}
