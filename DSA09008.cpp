#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int parent[10000];
bool visited[10000];
vector<int> adj[10000];

int n,m;
void DFS(int u){
    visited[u] = true;
    
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void Lienthong(int u){
    int ans = 0;
    for(int i = 1 ;i <= n ;i++){
        if(!visited[i]){
            ans ++;
            DFS(i);
        }
    }
    cout << ans<< endl;
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    { 
        memset(visited,false,sizeof(visited));
        for(int i = 0 ;i < 10000; i++ ) adj[i].clear();
        cin >> n >> m;
        for(int i = 0 ;i < m ;i++){
            int a,b; cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }          
        Lienthong(1);
        
               
    }
    return 0;
}