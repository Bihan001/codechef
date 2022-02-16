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

int getMinRotVal(char curr, char target, int x, int y) {
    if (curr == target) return 0;
    if (curr == 'N') {
        if (target == 'E') return min(x, 3 * y);
        if (target == 'W') return min(y, 3 * x);
    }
    if (curr == 'S') {
        if (target == 'W') return min(x, 3 * y);
        if (target == 'E') return min(y, 3 * x);
    }
    if (curr == 'E') return min(2 * x, 2 * y);
    if (curr == 'W') return min(2 * x, 2 * y);
    return 0;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    vi arr(n);
    int minval = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = getMinRotVal(s[i], 'W', x, y);
        minval += arr[i];
    }
    int currsum = minval;
    for (int i = 1; i <= n; i++) {
        currsum -= arr[i - 1];
        arr[i - 1] = getMinRotVal(s[i - 1], 'E', x, y);
        currsum += arr[i - 1];
        minval = min(minval, currsum);
    }
    cout << minval << endl;
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
