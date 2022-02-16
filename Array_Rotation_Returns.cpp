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
    vll arr(n), brr(n);
    inputarr(arr, n);
    inputarr(brr, n);
    vll indices;
    ll minval = INT_MAX;
    for (ll i = 0; i < n; i++) {
        minval = min(minval, (arr[0] + brr[i]) % n);
    }
    for (ll i = 0; i < n; i++) {
        ll x = (arr[0] + brr[i]) % n;
        if (x == minval) {
            indices.pb(i);
        }
    }
    vll c1, c2;
    if (indices.size() == 1) {
        ll i = 0;
        for (ll j = indices[0]; j < n; j++, i++) {
            c1.pb((arr[i] + brr[j]) % n);
        }
        for (ll j = 0; j < indices[0]; j++, i++) {
            c1.pb((arr[i] + brr[j]) % n);
        }
        for (auto it : c1) cout << it << ' ';
        cout << endl;
    } else {
        // indices size == 2
        ll i = 0;
        for (ll j = indices[0]; j < n; j++, i++) {
            c1.pb((arr[i] + brr[j]) % n);
        }
        for (ll j = 0; j < indices[0]; j++, i++) {
            c1.pb((arr[i] + brr[j]) % n);
        }
        i = 0;
        for (ll j = indices[1]; j < n; j++, i++) {
            c2.pb((arr[i] + brr[j]) % n);
        }
        for (ll j = 0; j < indices[1]; j++, i++) {
            c2.pb((arr[i] + brr[j]) % n);
        }
        if (c2 < c1) {
            for (auto it : c2) cout << it << ' ';
        } else {
            for (auto it : c1) cout << it << ' ';
        }
        cout << endl;
        return;
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
