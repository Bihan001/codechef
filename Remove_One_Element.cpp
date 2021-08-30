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
    vll a(n), b(n - 1);
    inputarr(a, n);
    inputarr(b, n - 1);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    map<ll, ll> hash;
    for (ll i = 0; i < n - 1; i++) {
        ll m1 = b[i] - a[i];
        ll m2 = b[i] - a[i + 1];
        if (m1 != m2) {
            if (m1 > 0) hash[m1] += 1;
            if (m2 > 0) hash[m2] += 1;
        } else {
            if (m1 > 0) hash[m1] += 1;
        }
    }
    for (auto i : hash) {
        if (i.second == n - 1) {
            cout << i.first << endl;
            break;
        }
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
