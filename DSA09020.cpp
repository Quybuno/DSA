#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
int x[1001][1001];
int main() {
    fast_io();
    int n; cin >> n;
    cin.ignore();
    for(int i = 1; i<= n;i++){
        string s,num; 
        getline(cin,s);
        stringstream ss(s);
        while (ss >> num)
        {
            x[i][stoi(num)] = 1; 
        }
        
    }
    
    for(int i = 1;i <= n;i++ ){
        for(int j = 1; j<= n ; j++){
            cout << x[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}