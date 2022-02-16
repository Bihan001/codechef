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

int getCount(vi arr) {
    multiset<int> s;
    for (int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
        auto it = s.upper_bound(arr[i]);
        if (it != s.end()) s.erase(it);
    }
    return s.size();
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    inputarr(a, n);
    inputarr(b, m);
    cout << getCount(a) + getCount(b) << endl;
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
