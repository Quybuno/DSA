#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

// int main() {
//     fast_io();
//     int t;cin >> t;
//     while(t--)
//     {
//         int v,e;
//         cin >> v >> e;
//         vector<int> adj[10001];
//         while (e--)
//         {
//             int a,b; cin >> a >> b;
//             adj[a].pb(b);
//         }
//         for(int i = 1 ;i <= v;i++){
//             cout <<i<<": ";
//             for(auto x : adj[i]){
//                 cout << x << " ";
//             }
//             cout << endl;
//         }                
//     }
//     return 0;
// }

int main(){
    int t; cin >> t;
    while (t--)
    {
        int v,e; cin >> v >> e;
        vector<vector<int>> vt(v+1);
        while (e--)
        {
            int a,b; cin >> a >> b;
            vt[a].pb(b);
        }
        
        for(int i = 1 ;i <=v;i++){
            cout <<i<<": ";
            for(int j = 0 ;j < vt[i].size();j++){
                cout << vt[i][j]<<" ";
            }
            cout << endl;
        }  
        
    }
}