#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s = "A"; // Bước 1: Khởi tạo xâu ban đầu là 'A'
    
    for (int i = 2; i <= n; i++) {
        s = s + char('A' + i - 1) + s;
    }
    
    cout << s << endl;
    return 0;
}
