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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    
    while (!q.empty())
    {
        int v = q.front();q.pop();
        cout << v<<" ";
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;  
            }
        }
    }
    
}


int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < 10000; i++) 
            adj[i].clear();
            
        int v, e, u;
        cin >> v >> e >> u;    
        for(int i = 0 ;i < e ;i++){
            int a,b; cin >> a >> b;
            adj[a].push_back(b);
        }       
        BFS(u);
        cout << endl;
               
    }
    return 0;
}