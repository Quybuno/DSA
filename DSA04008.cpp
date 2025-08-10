#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll mod = 1e9 + 7;
ll F[100000000];
void Fibo(){
   F[0] = 0,F[1] = 1;
    for(int i = 2 ;i <= 100000000;i++){
        F[i] = (F[i-1]%mod + F[i-2]%mod) % mod;
    }
}


int main() {
    fast_io();
    int t;cin >> t;
    Fibo();
    while(t--)
    { 
        ll n; cin >> n;
        cout << F[n]<<endl;         
               
    }
    return 0;
}