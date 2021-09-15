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
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vi arr(n);
    inputarr(arr, n);
    if (n == 1) {
        cout << 1 << ' ' << 0 << endl;
        return;
    }
    if (x == 0) {
        map<int, int> m;
        for (int it : arr) m[it]++;
        int maxcnt = 0;
        for (auto it : m) maxcnt = max(maxcnt, it.second);
        cout << maxcnt << ' ' << 0 << endl;
        return;
    }
    map<int, int> m1, m2;
    for (int it : arr) m1[it]++, m1[it ^ x]++, m2[it ^ x]++;
    vector<pii> ans;
    for (auto it : m1) {
        ans.pb({it.second, m2[it.first]});
    }
    sort(all(ans), comp);
    cout << ans[0].first << ' ' << ans[0].second << endl;
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
