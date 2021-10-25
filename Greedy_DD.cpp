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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    inputarr(arr, n);
    int done = 0, maxsum = 0, sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];
    int i = 0, j = k - 1;
    while (!done || i % n != 0) {
        if (j == n - 1) done = 1;
        maxsum = max(maxsum, sum);
        sum -= arr[i % n];
        i++, j++;
        sum += arr[j % n];
    }
    cout << maxsum << endl;
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
