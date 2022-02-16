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
    vi arr(n);
    inputarr(arr, n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                if (arr[i] < arr[j]) swap(arr[i], arr[j]);
            }
            if (i % 2 == 1 && j % 2 == 1) {
                if (arr[i] > arr[j]) swap(arr[i], arr[j]);
            }
        }
    }
    int cnt = 0;
    vi ones(n, 0);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1)
            ones[i] = ones[i - 1] + arr[i];
        else
            ones[i] = ones[i - 1];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            int val = ones[n - 1] - ones[i];
            cnt += arr[i] * val;
        }
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << cnt << endl;
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
