#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

bool visited[1005];
vector<pair<int,int>> dsachc;
int a[1005][1005];
vector<int> ke[1005];
void DFS1(int v,int e,int n){
    // danh sach canh
    cout << n<<" ";
    visited[n] = true;
    for(auto it : dsachc) {
        if(it.first == n){
            if(!visited[it.second]){
                DFS1(v,e,it.second);
            }
        }
        if(it.second == n){
            if(!visited[it.first]){
                DFS1(v,e,it.first);
            }
        }
    }
}

void DFS2(int v,int e,int n){
    // ma tran ke
    cout << n<<" ";
    visited[n] = true;
    for(int i = 1; i <= n ; i++){
        if(a[n][i]){
            if(!visited[i]){
                DFS2(v,e,i);
            }
        }
    }
}

void DFS3(int v,int e ,int n)
{
    // danh sach ke
    
    cout << n<<" ";
    visited[n] = true;
    for(auto it : ke[n]){
        if(!visited[it]){
            DFS3(v,e,it);
        }
    }
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    { 
        dsachc.clear();
        memset(visited,false,sizeof(visited));
        int v,e,n;
        cin >> v >> e >> n;
        for(int i = 0 ;i < e;i++){
            int a,b;
            cin >> a >> b;
            dsachc.pb({a,b});
        }
        DFS1(v,e,n);
        cout << endl;      
    }
    return 0;
}