#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll mod = 1e9 + 7;

ll powmod(int n,int a){
    if(a == 0) return 1;
    ll x = powmod(n,a/2);   
    if(a % 2 == 0) return ((x % mod) * (x % mod)) % mod;
    else return (((x % mod ) * (x% mod) % mod) * (n % mod)) % mod;
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        int n ; ll k;
        cin >> n >> k;
        cout <<powmod(n,k)<<endl;           
               
    }
    return 0;
}