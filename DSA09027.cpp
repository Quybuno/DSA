#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

bool visited[10000];
vector<int> adj[10000];
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
        for(int i = 0; i < 10000; i++){
            adj[i].clear();
        }
        int u,v; cin >> u >> v;
        for(int i = 0 ;i < v ;i ++){
            int a,b;
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        } 
        
        int q; cin >> q;
        while (q--)
        {
            memset(visited, false, sizeof(visited));
            int x,y;
            cin >> x >> y;
            DFS(x);
            if(visited[y]){
                cout << "YES";
            }
            else cout <<"NO";
            /* code */
            cout << endl;
        }
        
        

               
    }
    return 0;
}