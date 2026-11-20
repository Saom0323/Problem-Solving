#include <iostream>
#include <string>
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
            if (a[i] != b[i]) {
                mismatch++;
            }
        }

        if (mismatch <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}