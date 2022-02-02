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

double getMean(int s, int e, vi &arr) {
    double sum = 0;
    for (int i = s; i <= e; i++) sum += arr[i];
    return sum / (e - s + 1);
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    inputarr(arr, n);
    sort(all(arr));
    double maxval = getMean(0, n - 2, arr) + getMean(n - 1, n - 1, arr);
    int i = n - 2;
    while (i >= 0) {
        maxval = max(maxval, getMean(0, i - 1, arr) + getMean(i, n - 1, arr));
        i--;
    }
    cout << fixed << setprecision(6) << maxval << endl;
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
