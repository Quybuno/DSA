#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll mod = 1e9 + 7;
 
ll rev(ll n){
    ll x = 0;
    while (n > 0)
    {
        x = x * 10 + n % 10;
        n/=10;
    }
    return x;
}

ll pin(ll n,ll r){
    if(r == 0 ) return 1;
    ll x = pin(n,r/2);
    if(r % 2 == 0){
        return ((x % mod) * (x % mod)) % mod;
    }
    else return (((x % mod) * (x % mod)%mod) * (n % mod)) % mod;
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {           
        string s; cin >> s;
        string n = s;
        reverse(s.begin(),s.end());
        cout <<pin(stoll(n),stoll(s))<<endl;
    }
    return 0;
}