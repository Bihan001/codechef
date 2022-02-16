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
#define all(a) a.begin(), a.end()
const int MOD = 1e9 + 7;
const ll INF = 1e18;
#define inputarr(arr, n) \
    for (ll i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi diff(n - 1);
    for (int i = 0; i < n - 1; i++) diff[i] = (s[i] != s[i + 1]);
    int ans = 0, sum = 0;
    for (int i = 0; i < k; i++) sum += diff[i];
    ans += sum;
    int i = 0, j = k - 1;
    while (j < n) {
        sum -= diff[i];
        i++, j++;
        if (j == n) break;
        sum += diff[j];
        ans += sum;
    }
    cout << ans << endl;
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
