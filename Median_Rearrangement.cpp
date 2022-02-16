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

// * Partial

void solve() {
    int n, k;
    cin >> n >> k;
    vi arr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            arr.pb(x);
        }
    }
    sort(all(arr));
    vector<vi> mat(n, vi(n));
    int ki = 0, kj = arr.size() - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            mat[i][j] = arr[ki++];
        }
        for (int j = n / 2; j < n; j++) {
            mat[i][j] = arr[kj--];
        }
        sort(all(mat[i]));
    }
    vi meds(n);
    double m = ((double)n + 1) / 2;
    for (int i = 0; i < n; i++) {
        meds[i] = mat[i][m];
    }
    int sum = 0;
    for (int i = 0; i < meds.size(); i++) sum += meds[i];
    if (sum > k) {
        cout << -1 << endl;
        return;
    }
    cout << *min_element(all(meds)) << endl;
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
