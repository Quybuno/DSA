#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
int a[1001][1001];
int main() {
    fast_io();
    int n; cin >> n;
    
    // for(int i = 1 ;i <=n ; i++){
    //     for(int j = 1; j <= n; j++){
    //         cin >> a[i][j];
    //     }
    // }
    vector<pair<int,int>> vt;
    for(int i = 1 ; i <= n ;i++){
        vector<int> a;
        for(int j = 1; j <= n;j++){
            int s; cin >> s;
            if(s == 1) a.pb(j);
        }
        for(int j = 0 ;j < a.size();j++){
            cout << a[j]<<" ";
        }
        cout << endl;
    }
    
    // "for(auto it : vt){
    //     cout << it.first <<" "<<it.second<<endl;
    // }"
    return 0;
}