// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
const int MOD = 1e9 + 7;
const int INF = 1e18;
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n > 1 && k == 1) {
        cout << -1 << endl;
        return;
    }
    if (k == 2) {
        for (int i = 2; i <= n; i++) cout << i << ' ';
        cout << 1 << endl;
        return;
    }
    for (int i = k; i <= n; i++) cout << i << ' ';
    for (int i = 1; i < k; i++) cout << i << ' ';
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
