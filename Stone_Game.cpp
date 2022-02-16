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


bool comp(char a, char b) {
    return a > b;
}

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    string ans(2 * n, ' ');

    sort(all(a));
    sort(all(b), comp);

    int l = 0;
    int r = 2 * n - 1;

    int la = 0, lb = 0;
    int ra = n - 1, rb = n - 1;

    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            if (a[la] < b[lb]) {
                ans[l] = a[la];
                l++;
                la++;
            } else {
                ans[r] = a[ra];
                r--;
                ra--;
            }
        } else {
            if (b[lb] > a[la]) {
                ans[l] = b[lb];
                l++;
                lb++;
            } else {
                ans[r] = b[rb];
                r--;
                rb--;
            }
        }
    }
    cout << ans << endl;
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
