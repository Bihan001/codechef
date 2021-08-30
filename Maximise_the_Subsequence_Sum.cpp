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
    ll n, k;
    cin >> n >> k;
    vll arr(n);
    inputarr(arr, n);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (k == 0) break;
        if (arr[i] < 0) {
            arr[i] = -arr[i];
            k -= 1;
        } else {
            break;
        }
    }
    ll sum = 0;
    for (int it : arr) sum += (it >= 0) ? it : 0;
    cout << sum << endl;
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
