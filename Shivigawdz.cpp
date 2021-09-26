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
    int n, a, b;
    cin >> n >> b >> a;
    vector<double> arr(n);
    inputarr(arr, n);
    double maxavg = DBL_MIN;
    for (int k = a; k <= b; k++) {
        int i = 0, j = k - 1;
        double avg = 0;
        for (int x = 0; x < k; x++) avg += arr[x] / k;
        while (j < n) {
            maxavg = max(maxavg, avg);
            if (j + 1 == n) break;
            avg -= arr[i] / k;
            i++, j++;
            avg += arr[j] / k;
        }
    }
    cout << fixed << setprecision(7) << maxavg << endl;
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
