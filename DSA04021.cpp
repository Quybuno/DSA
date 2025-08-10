// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define pii pair<int, int>

// string s[1000];

// void nhiphan(){
//     s[1] = '0';
//     s[2] = '1';
//     for(int i = 3 ;i < 93 ;i++){
//         s[i] = s[i-2] + s[i-1];
//     }
// }

// char kt(int n,int k){
//     if(n == 1) return '0';
//     if(n == 2) return '1';
//     if(k <= s[n-2].length()){
//         return kt(n-2,k);
//     }
//     else return kt(n-1,k-s[n-2].length());
// }


// int main() {
//     fast_io();
//     int t;cin >> t;
//     nhiphan();
//     while(t--)
//     {
//         int n,k; cin >> n >> k;
//         cout << kt(n,k)<<endl;
               
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

ll Fibo[100];

void fibo(){
    Fibo[1] = 1;
    Fibo[2] = 1;
    for(int i = 3 ;i<= 92;i++){
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
    }
}

char sofibo(int n,ll k){
    if( n == 1) return '0';
    if( n == 2) return '1';
    if(k <= Fibo[n-2] ){
        return sofibo(n-2,k);
    }
    else return sofibo(n-1,k - Fibo[n-2]);
}


int main() {
    fast_io();
    int t;cin >> t;
    fibo();
    while(t--)
    {      
        int n;
        ll k;
        cin >> n >> k;
        cout << sofibo(n,k) << endl;     
               
    }
    return 0;
}