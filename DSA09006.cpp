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
int parent[10000];

void DFS(int u){
    visited[u] = true;

    for(int v : adj[u]){
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
    }
}



int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {        
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(parent));
        for(int i = 0 ;i < 10000; i ++) adj[i].clear();
        
        int v,e,s,t;
        cin >> v >> e >> s >> t;
        for(int i = 0 ;i < e ;i++){
            int a,b; cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        DFS(s);
        
        if(visited[t]){
            vector<int> path;
            while ( t != s)
            {
                path.pb(t);
                t = parent[t];
                /* code */
            }
            path.pb(t);
            for(int i = path.size() - 1; i>= 0 ;i--){
                cout << path[i]<<" ";
            }
            
        }
        cout << endl;
        
    }
    return 0;
}