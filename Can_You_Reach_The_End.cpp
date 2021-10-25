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
    vector<pii> arr(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};
    }
    sort(all(arr));
    int u = 0, v = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i].second == n) {
            v = i;
            break;
        }
    }
    int i;
    for (i = u + 1; i < n; i++) {
        if (arr[i].second == arr[i - 1].second - 1)
            continue;
        else
            break;
    }
    if (i == n or arr[i - 1].second == 1) {
        cout << "NO" << endl;
        return;
    }
    for (i = v + 1; i < n; i++) {
        if (arr[i].second == arr[i - 1].second - 1)
            continue;
        else
            break;
    }
    if (i == n or arr[i - 1].second == 1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
