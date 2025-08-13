#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

bool visited[1005];
vector<pair<int,int>> vt;
vector<int> bieudien;
void DFS(int v ,int e,int n){
    bieudien.pb(n);
    visited[n] = true;
    for(auto it : vt){
        if(it.first == n){
            if(!visited[it.second]) DFS(v,e,it.second);
        }
        if(it.second == n){
            if(!visited[it.first]) DFS(v,e,it.first);
        }
    }
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        bieudien.clear();
        vt.clear();
        memset(visited,false,sizeof(visited));           
        int v ,e , n , k;
        cin >> v >> e >> n >> k;
        for(int i = 1; i <= e ;i++){
            int a,b;
            cin >> a >> b;
            vt.pb({a,b});
        }
        DFS(v,e,n);
        for(int i = n ;i < k;i++){
            cout << bieudien[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}