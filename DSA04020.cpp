#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int Find(int n,int a[],int k){
    int l = 0,r= n-1;
    while (l <= r)
    {
        int m = (l+r)/2;
        if(a[m] == k){
            return m+1;
        }
        else if(a[m] < k){
            l = m+1;
        }
        else r = m-1;
    }
    return -1;
    
}

int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ;i < n;i++) cin >> a[i];
        sort(a,a+n);           
        if(Find(n,a,k)== -1){
            cout <<"NO";
        }     
        else cout << Find(n,a,k);
        cout << endl;
    }
    return 0;
}