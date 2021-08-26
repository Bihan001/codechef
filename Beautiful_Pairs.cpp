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
    ll n;
    cin >> n;
    vll arr(n);
    inputarr(arr, n);
    // int ans = 0;
    // for (int i = 0; i < n; i++) {
    //     int cnt = 0;
    //     for (int j = 0; j < n; j++) {
    //         if (arr[j] == arr[i]) continue;
    //         if (arr[j] < arr[i]) cnt += 1;
    //     }
    //     ans += cnt;
    // }
    // sort(arr.begin(), arr.end());
    // for (auto it : arr) cout << it << ' ';
    // cout << ans * 2 << endl;
    sort(arr.begin(), arr.end());
    map<ll, pll> hash;
    for (ll i = 0; i < n; i++) {
        if (hash.find(arr[i]) == hash.end()) {
            hash[arr[i]] = mp(0, 0);
        }
        if (hash[arr[i]].first == 0) {
            hash[arr[i]].first = 1;
            hash[arr[i]].second = i;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += hash[arr[i]].second;
    }
    cout << ans * 2 << endl;
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
