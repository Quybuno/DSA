#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define pii pair<int, int>


int findFloor(ll A[], ll N, ll X) {
    int l = 0, r = N - 1;
    int res = -1; // Mặc định nếu không tìm thấy

    while (l <= r) {
        int mid = (l + r) / 2;

        if (A[mid] <= X) { // Tìm số lớn nhất ≤ X
            res = mid + 1;  // Cập nhật kết quả
            l = mid + 1; // Tiếp tục tìm bên phải
        } else {
            r = mid - 1; // Giảm phạm vi tìm kiếm
        }
    }
    return res; // Trả về chỉ số của phần tử floor(X) hoặc -1 nếu không có
}
int main() {
    fast_io();
    int t;cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >>k;
        ll a[n];
        for(int i = 0 ;i < n ;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        cout << findFloor(a,n,k);
        cout << endl;
    }
    return 0;
}