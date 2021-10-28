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
    int n, v;
    cin >> n >> v;
    int minv = 0, maxv = (n * (n - 1)) / 2;
    if (v == 1) {
        cout << maxv << ' ' << maxv << endl;
        return;
    }
    if (v >= n - 1) {
        minv = n - 1;
    } else {
        minv += v + ((n - v) * (n - v + 1)) / 2 - 1;
    }
    cout << maxv << ' ' << minv << endl;
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
