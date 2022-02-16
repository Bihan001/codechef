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

bool comp(pii a, pii b) {
    return a.second < b.second;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pii> arr(n);
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        arr[i] = mp(v, i);
    }
    sort(all(arr));
    int x = k / 2;
    for (int i = n - 1; i >= 0; i--) {
        int l = (k & 1) ? x : x - 1, r = x;
        if (i + r < n && i - l >= 0) {
            cout << arr[i].first << endl;
            vector<pii> res;
            for (int j = i - l; j <= i + r; j++) {
                res.pb(arr[j]);
            }
            sort(all(res), comp);
            for (pii it : res) cout << it.first << ' ';
            cout << endl;
            return;
        }
    }
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
