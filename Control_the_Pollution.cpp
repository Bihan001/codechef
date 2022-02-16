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

int recurse(int n, int bus, int car, int x, int y) {
    if (n == 0) return 0;
    return 0;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    if (n <= 4) {
        cout << min(x, y) << endl;
        return;
    }
    if (n <= 100) {
        int q = n / 4;
        int r = n % 4;
        if (r != 0) q++;
        cout << min(x, y * q) << endl;
        return;
    }
    int ans = 0;
    while (n >= 100) {
        ans += min(x, 25 * y);
        n -= 100;
    }
    if (n == 0) {
        cout << ans << endl;
        return;
    }
    int q = n / 4;
    int r = n % 4;
    if (r != 0) q++;
    cout << ans + min(x, y * q) << endl;
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
