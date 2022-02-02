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

int search(int n, string s) {
    int cnt = 0;
    for (int i = n; i >= 0; i--) {
        int ch = s[i] - '0';
        int cost = (ch + cnt) % 10;
        if (cost > 0) {
            cnt += 10 - cost;
        }
    }
    return cnt;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (search(mid, s) > k) {
            r = mid - 1;
        } else {
            l = mid + 1;
            ans = l;
        }
    }
    cout << ans << endl;
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
