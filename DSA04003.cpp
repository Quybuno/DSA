#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll mod = 1e9 + 7;

ll pin(ll n, ll r){
    if (r == 0) return 1;
    ll x = pin(n, r / 2);
    
    if (r % 2 == 0) return (x * x) % mod;  
    return ((n%mod) *(x * x)%mod) %mod;
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        int n ; 
        cin >> n;
        cout <<pin(2,n-1)<<endl;           
               
    }
    return 0;
}