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
        int n; cin >> n;
        int a[n];
        for(int i = 0 ;i < n ;i++) cin >> a[i];
        int *it = upper_bound(a,a+n,0);
        cout << (it - a);
        // if(it == a + n){
        //     cout << n;
        // }           
        // else{
        //     cout << (it - a);
        // }
        cout << endl;      
    }
    return 0;
}