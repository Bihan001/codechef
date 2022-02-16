// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const int MOD = 1e9 + 7;
const ll INF = 1e18;
#define inputarr(arr, n) \
    for (ll i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    int n;
    cin >> n;
    vll arr(n);
    inputarr(arr, n);
    if (arr.size() <= 2) {
        cout << 0 << endl;
        return;
    }
    map<int, int> hash;
    for (int it : arr) hash[it]++;
    vector<pll> a;
    for (auto it : hash) a.pb({it.second, it.first});
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < a.size() - 1; i++) {
        ans += a[i].first;
    }
    if (a[a.size() - 1].first == 1) {
        cout << n - 2 << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
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
