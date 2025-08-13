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
    int t; cin >> t;                                        
    vector<pair<int,int>> a;
    cin.ignore();
    for(int i = 1 ;i <= t;i++){
        string s,num;
        getline(cin,s);
        stringstream ss(s);
        while (ss >> num)
        {
            if(stoi(num) > i){
                a.pb({i,stoi(num)});
            }
        }
    }
    for(auto it : a){
        cout << it.first <<" "<<it.second<<endl;
    }

    return 0;
}
