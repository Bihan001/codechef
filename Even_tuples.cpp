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

map<ll, ll> factorials;

ll getFactorial(ll n) {
    if (n <= 1) return 1;
    if (factorials[n]) return factorials[n];
    return factorials[n] = n * getFactorial(n - 1);
}

ll ncr(ll n, ll r) {
    if (n < r) return 0;
    if (n == r) return 1;
    return getFactorial(n) / (getFactorial(r) * getFactorial(n - r));
}

ll binomialCoeff(ll n, ll k) {
    if (n < k) return 0;
    if (n == k) return 1;
    ll res = 1;
    if (k > n - k) k = n - k;
    for (ll i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vll arr(n);
    inputarr(arr, n);
    vll odd(n, 0), even(n, 0);
    if (arr[0] % 2 == 0) {
        even[0] = 1;
    } else {
        odd[0] = 1;
    }
    for (ll i = 1; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[i] = even[i - 1] + 1;
            odd[i] = odd[i - 1];
        } else {
            odd[i] = odd[i - 1] + 1;
            even[i] = even[i - 1];
        }
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        ll oddCnt = odd[r], evenCnt = even[r];
        if (l > 0) {
            oddCnt = odd[r] - odd[l - 1];
            evenCnt = even[r] - even[l - 1];
        }
        unsigned ll ans = binomialCoeff(evenCnt, 3) + (evenCnt * binomialCoeff(oddCnt, 2));
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
