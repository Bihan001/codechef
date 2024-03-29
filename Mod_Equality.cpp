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
    sort(arr.begin(), arr.end());
    ll minval = arr[0];
    int i = 0, j = 0;
    while (i < n && arr[i] == minval) i += 1;
    if (i == n) {
        cout << 0 << endl;
        return;
    }
    while (i < n) {
        if (arr[i] % (arr[i] - minval) != minval) {
            cout << n << endl;
            return;
        }
        i += 1, j += 1;
    }
    cout << j << endl;
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
