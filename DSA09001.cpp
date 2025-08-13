#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        int n,m; cin >> n >> m;
        vector<int> adj[10001];
        while (m--)
        {
            int a,b; 
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        for(int i = 1 ;i <= n;i++){
            cout << i<<": ";
            for(auto x : adj[i]){
                cout << x<<" ";
            }
            cout << endl;
        }
                
    }
    return 0;
}