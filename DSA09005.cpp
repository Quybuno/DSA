#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

vector<int> ke[1004];
bool visited[1004];

void BFS(int n) {
    queue<int> q;
    q.push(n); 
    visited[n] = true;
    
    while (!q.empty()) {
        int res = q.front();
        cout << res << " ";
        q.pop();
        
        for (auto it : ke[res]) {
            if (!visited[it]) {
                q.push(it);
                visited[it] = true;
            }
        }
    }
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        fill(visited, visited + 1004, false);

        for (int i = 0; i < 1004; i++) {
            ke[i].clear();
        }

        int v, e, n;
        cin >> v >> e >> n;
        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            ke[a].pb(b);
            ke[b].pb(a);
        }
        
        BFS(n);
        cout << endl;
    }
    return 0;
}
