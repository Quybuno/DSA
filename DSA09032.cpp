#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

const int MAXN = 100005;
vector<int> adj[MAXN];
bool visited[MAXN];
int v, e;

int dem = 0;
void dfs(int u){
    if(u < 1 || u > v) return;  // Kiểm tra đỉnh hợp lệ
    visited[u] = true;
    dem++;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

void Lienthong(){
    int ans = 0;
    for(int i = 1; i <= v; i++){
        if(!visited[i]){
            dem = 0;
            dfs(i);
            ans = max(ans, dem);
        }
    }
    cout << ans << endl;
}

struct node {
    int val;
    node* left;
    node* right;
    node(int x) {
        val = x;
        left = right = NULL;
    }
};

node* bst(int pre[], int start, int end) {
    if (start > end) return NULL;
    
    node* root = new node(pre[start]);
    
    // Find the first element greater than root
    int i;
    for (i = start + 1; i <= end; i++) {
        if (pre[i] > pre[start]) break;
    }
    
    root->left = bst(pre, start + 1, i - 1);
    root->right = bst(pre, i, end);
    
    return root;
}

void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << ' ';
}

int main() {
    fast_io();
    int t; cin >> t;
    while(t--) { 
        // Reset
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < MAXN; i++) adj[i].clear();
        
        // Input
        cin >> v >> e;
        if(v <= 0 || e < 0) {  // Kiểm tra input hợp lệ
            cout << "0\n";
            continue;
        }
        
        for(int i = 0; i < e; i++){
            int a, b; 
            cin >> a >> b;
            if(a >= 1 && a <= v && b >= 1 && b <= v) {  // Kiểm tra đỉnh hợp lệ
                adj[a].pb(b);
                adj[b].pb(a);
            }
        }  
        Lienthong();
    }
    return 0;
}