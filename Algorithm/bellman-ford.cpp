#include <bits/stdc++.h>
using namespace std;

vector < int > V;
vector < pair < int, int > > E;
map < pair <int, int>, int > C;
vector < int > d;

int N = 6;
int INF = 999999999;

void InitializeSingleSource(int s) {
    V.clear();
    d.clear();

    for(int i = 0; i < N; i++) {
        V.push_back(i);
        d.push_back(INF);
    }

    d[s] = 0;
}

void Relax(int u, int v, int w) {
    d[v] = min(d[v], d[u] + w);
}

bool BellmanFord(int s) {
    InitializeSingleSource(s);

    for(int i = 0; i < N - 1; i++ ) {
        int sz = E.size();
        for(int j = 0; j < sz; j++) {
            int u = E[j].first;
            int v = E[j].second;
            int w = C[E[j]];

            Relax(u, v, w);
        }
    }
    int sz = E.size();
    for(int j = 0; j < sz; j++) {
        int u = E[j].first;
        int v = E[j].second;
        int w = C[E[j]];

        if(d[v] > d[u] + w) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Enter the source: " << endl;
    int s;
    cin >> s;

    E.clear();
    C.clear();

    int en;
    cout << "Enter the number of edges: " << endl;
    cin >> en;
    cout << "Enter the edges: " << endl;
    while(en--) {
        int u, v, w;
        cin >> u >> v >> w;
        pair < int, int > uv = make_pair(u, v);
        E.push_back(uv);
        C[uv] = w;
    }

    if(BellmanFord(s)) {
        int sz = d.size();
        for(int i = 0; i < sz; i++) {
            cout << V[i] << " " << d[i] << endl;
        }
    }
    else {
        cout << "Shortest path can't be found!!!!" << endl;
    }
}
