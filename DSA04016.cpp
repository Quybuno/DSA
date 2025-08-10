#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int Find(vector<int>& a,int k){
    int l = 0,r = a.size() - 1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == k){
            
            return m;
            
        }
        else if(a[m] < k){
            l = m +1;
        }
        else r = m - 1;
        
    }
    
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    { 
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> vt;
        for(int i = 0;i <n ;i++){
            int x; cin >> x;
            vt.pb(x);
        }
        for(int i = 0;i < m ;i++){
            int x; cin >> x;
            vt.pb(x);
        }          
        sort(vt.begin(),vt.end()); 
        cout << vt[k-1]<<endl;
    }
    return 0;
}