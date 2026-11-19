#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        int mismatch = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '0' && b[i] == '1') {
                mismatch++;
            }
            else if (a[i] == '1' && b[i] == '0') {
                mismatch++;
            }
        }
        if (mismatch <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}