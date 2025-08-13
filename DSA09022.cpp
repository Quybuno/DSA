#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

vector<int> adj[10000];
bool visited[10000];

void DFS(int u){
    visited[u] = true;
    cout << u <<" ";
    for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    { 
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < 10000; i++) adj[i].clear();
        int v,e,u;
        cin >> v >> e >> u;
        for(int i = 0 ; i < e ;i++){
            int m,n;
            cin >> m >>n;
            adj[m].pb(n);
        }     
        DFS(u);
        cout << endl;
               
    }
    return 0;
}