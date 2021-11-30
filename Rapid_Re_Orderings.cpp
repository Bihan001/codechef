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

void solve() {
    int n;
    cin >> n;
    vi b(n * 2);
    inputarr(b, n * 2);
    map<int, int> hash;
    for (int i = 0; i < n * 2; i++) {
        hash[b[i]]++;
    }
    vi a;
    for (auto x : hash) a.pb(x.first);
    int i = 0, j = 0;
    while (j < n) {
        int medi = (j - i) / 2;
        if (hash[a[medi]] > 0) {
            hash[a[medi]]--;
        } else {
            cout << -1 << endl;
            return;
        }
        j++;
    }
    i = n - 1, j = n - 1;
    while (j >= 0) {
        int medi = j + ((i - j) / 2);
        if (hash[a[medi]] > 0) {
            hash[a[medi]]--;
        } else {
            cout << -1 << endl;
            return;
        }
        j--;
    }
    printarr(a, n);
    cout << endl;
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
