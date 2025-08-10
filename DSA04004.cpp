#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
ll haimu[51];
void Haimu() {
    for (int i = 1; i <= 50; i++) {
        haimu[i] = 1LL << (i - 1); // 2^(i - 1)
    }
}

int tinh(int n,int k){
    if (n == 0) return 0;
    ll x = haimu[n];
    if(k == x) return n;
    if(k > x) return tinh(n-1,k-x);
    return tinh(n-1,k);
}

int main() {
    fast_io();
    int t;cin >> t;
    Haimu();
    while(t--)
    {
        
        int n;
        ll k;
        cin >> n >> k;
        
        cout << tinh(n,k)<<endl;           
               
    }
    return 0;
}