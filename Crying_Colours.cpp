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

int ans;

void recurse(vector<vi> &arr, int n, int steps) {
    if (arr[0][0] == n && arr[1][1] == n && arr[2][2] == n) {
        ans = min(ans, steps);
        return;
    }
    if (arr[0][0] < n) {
        int minval = min(arr[0][1], arr[1][0]);
        if (minval > 0) {
            // changeVal(0, 0, 1, 1, minval, arr);
            arr[0][0] += minval;
            arr[1][0] -= minval;
            arr[1][1] += minval;
            arr[0][1] -= minval;
            recurse(arr, n, steps + minval);
            arr[0][0] += -minval;
            arr[1][0] -= -minval;
            arr[1][1] += -minval;
            arr[0][1] -= -minval;
        } else {
            minval = min(arr[0][2], arr[1][0]);
            if (minval > 0) {
                arr[0][0] += minval;
                arr[1][0] -= minval;
                arr[1][2] += minval;
                arr[0][2] -= minval;
                recurse(arr, n, steps + minval);
                arr[0][0] += -minval;
                arr[1][0] -= -minval;
                arr[1][2] += -minval;
                arr[0][2] -= -minval;
            }
        }
        minval = min(arr[0][2], arr[2][0]);
        if (minval > 0) {
            arr[0][0] += minval;
            arr[2][0] -= minval;
            arr[2][2] += minval;
            arr[0][2] -= minval;
            recurse(arr, n, steps + minval);
            arr[0][0] += -minval;
            arr[2][0] -= -minval;
            arr[2][2] += -minval;
            arr[0][2] -= -minval;
        } else {
            minval = min(arr[0][1], arr[2][0]);
            if (minval > 0) {
                arr[0][0] += minval;
                arr[2][0] -= minval;
                arr[2][1] += minval;
                arr[0][1] -= minval;
                recurse(arr, n, steps + minval);
                arr[0][0] += -minval;
                arr[2][0] -= -minval;
                arr[2][1] += -minval;
                arr[0][1] -= -minval;
            }
        }
    }
    if (arr[1][1] < n) {
        int minval = min(arr[0][1], arr[1][0]);
        if (minval > 0) {
            // changeVal(0, 0, 1, 1, minval, arr);
            arr[0][0] += minval;
            arr[1][0] -= minval;
            arr[1][1] += minval;
            arr[0][1] -= minval;
            recurse(arr, n, steps + minval);
            arr[0][0] += -minval;
            arr[1][0] -= -minval;
            arr[1][1] += -minval;
            arr[0][1] -= -minval;
        } else {
            minval = min(arr[1][2], arr[0][1]);
            if (minval > 0) {
                arr[1][1] += minval;
                arr[0][1] -= minval;
                arr[0][2] += minval;
                arr[1][2] -= minval;
                recurse(arr, n, steps + minval);
                arr[1][1] += -minval;
                arr[0][1] -= -minval;
                arr[0][2] += -minval;
                arr[1][2] -= -minval;
            }
        }
        minval = min(arr[1][2], arr[2][1]);
        if (minval > 0) {
            arr[1][1] += minval;
            arr[2][1] -= minval;
            arr[2][2] += minval;
            arr[1][2] -= minval;
            recurse(arr, n, steps + minval);
            arr[1][1] += -minval;
            arr[2][1] -= -minval;
            arr[2][2] += -minval;
            arr[1][2] -= -minval;
        } else {
            minval = min(arr[2][1], arr[1][0]);
            if (minval > 0) {
                arr[1][1] += minval;
                arr[2][1] -= minval;
                arr[2][0] += minval;
                arr[1][0] -= minval;
                recurse(arr, n, steps + minval);
                arr[1][1] += -minval;
                arr[2][1] -= -minval;
                arr[2][0] += -minval;
                arr[1][0] -= -minval;
            }
        }
    }
    if (arr[2][2] < n) {
        int minval = min(arr[0][2], arr[2][0]);
        if (minval > 0) {
            // changeVal(0, 0, 1, 1, minval, arr);
            arr[2][2] += minval;
            arr[0][2] -= minval;
            arr[0][0] += minval;
            arr[2][0] -= minval;
            recurse(arr, n, steps + minval);
            arr[2][2] += -minval;
            arr[0][2] -= -minval;
            arr[0][0] += -minval;
            arr[2][0] -= -minval;
        } else {
            minval = min(arr[0][2], arr[2][1]);
            if (minval > 0) {
                arr[2][2] += minval;
                arr[0][2] -= minval;
                arr[0][1] += minval;
                arr[2][1] -= minval;
                recurse(arr, n, steps + minval);
                arr[2][2] += -minval;
                arr[0][2] -= -minval;
                arr[0][1] += -minval;
                arr[2][1] -= -minval;
            }
        }
        minval = min(arr[1][2], arr[2][1]);
        if (minval > 0) {
            arr[2][2] += minval;
            arr[1][2] -= minval;
            arr[1][1] += minval;
            arr[2][1] -= minval;
            recurse(arr, n, steps + minval);
            arr[2][2] += -minval;
            arr[1][2] -= -minval;
            arr[1][1] += -minval;
            arr[2][1] -= -minval;
        } else {
            minval = min(arr[1][2], arr[2][0]);
            if (minval > 0) {
                arr[2][2] += minval;
                arr[1][2] -= minval;
                arr[1][0] += minval;
                arr[2][0] -= minval;
                recurse(arr, n, steps + minval);
                arr[2][2] += -minval;
                arr[1][2] -= -minval;
                arr[1][0] += -minval;
                arr[2][0] -= -minval;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<vi> arr(3, vi(3));
    for (int i = 0; i < 3; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    ans = INT_MAX;
    recurse(arr, n, 0);
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
