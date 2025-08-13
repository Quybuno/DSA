#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

bool visited[1005];
int parent[10000];
vector<int> adj[10000];
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
        memset(visited, false, sizeof(visited));
        memset(parent, -1, sizeof(parent));
        for(int i = 0; i < 1005; i++) {
            adj[i].clear();
        }           
        int v ,e , s , t;
        cin >> v >> e >> s >> t;
        for(int i = 1; i <= e ;i++){
            int a,b;
            cin >> a >> b;
            adj[a].pb(b);            
        }
        for(int i = 1 ;i <= v ;i++){
            sort(adj[i].begin(),adj[i].end());
        }
        DFS(s);
        if(visited[t]){
            vector<int> path;
            while (t != s)
            {
                path.pb(t);
                t = parent[t];
                /* code */
            }
            path.pb(t);
            for(int i = path.size() - 1 ;i >= 0 ;i--) cout << path[i] << " ";
            
        }
        else cout <<"-1";
        cout << endl;
    }
    return 0;
}