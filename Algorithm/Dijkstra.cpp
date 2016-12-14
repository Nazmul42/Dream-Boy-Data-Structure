#include <bits/stdc++.h>
using namespace std;

struct node {
    int pos;
    int key;

    node(int _pos, int _key) {
        pos = _pos;
        key = _key;
    }

    bool operator <(const struct node a) const {
        return a.key < key;
    }
};

int d[100];
int color[100];
int cost[100][100];
int INF = 999999999;
int N;
int S;
int E;
priority_queue < node > Q;
vector < int > adj[100];

void InitializeSingleSource(int s) {
    for(int i = 0; i < N; ++i ) {
        d[i] = INF;
        color[i] = 0;
    }

    d[s] = 0;
}

void Relax(int u, int v, int w) {
    //d[v] = min(d[v], d[u] + w);
    if ( d[v] > d[u] + w ) {
        //cout << "Update " << v << " from " << d[v] << " to " << d[u] + w << endl;
        d[v] = d[u] + w;
        Q.push( node( v, d[v] ) );
    }
}

void Dijkstra(int s) {
    InitializeSingleSource(s);

    while( !Q.empty() ) {
        node U = Q.top();
        Q.pop();

        int u = U.pos;
        if (color[u] == 1) continue;
        color[u] = 1;

        cout << u << " " << d[u] << endl;


        int sz = adj[u].size();
        for (int i = 0; i < sz; ++i) {
            int v = adj[u][i];
            Relax(u, v, cost[u][v]);
        }
    }
}

int main() {
    #ifdef Mahir
        freopen("input.txt", "r", stdin);
    #endif

    cout << "Enter the number of nodes: ";
    cin >> N;
    cout << "Enter the source: ";
    cin >> S;
    for (int i = 0; i < N; ++i) {
        if(i == S) {
            Q.push( node( i, 0 ) );
        }
        else {
            Q.push( node( i, INF ) );
        }
    }

    cout << "Enter the number of edges: ";
    cin >> E;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        cin >> cost[u][v];
        adj[u].push_back(v);
    }

    Dijkstra(S);
}


/*
6
0
8
0 1 100
0 3 70
0 5 300
1 3 280
1 2 120
3 4 200
3 2 170
3 5 90
*/
