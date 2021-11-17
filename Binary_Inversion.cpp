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

bool comp(pair<string, pii> a, pair<string, pii> b) {
    // if (a.second.first != b.second.first) return a.second.first < b.second.first;
    // return a.second.second < b.second.second;
    if (a.second.second != b.second.second) return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<string, pii>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second.first = arr[i].second.second = 0;  // f = inv, s = 1 cnt
    }
    for (int i = 0; i < n; i++) {
        int zerocnt = 0, invcnt = 0, onecnt = 0;
        for (int j = m - 1; j >= 0; j--) {
            if (arr[i].first[j] == '1') {
                onecnt++;
                invcnt += zerocnt;
            } else {
                zerocnt++;
            }
        }
        arr[i].second.first = invcnt, arr[i].second.second = onecnt;
    }
    sort(all(arr), comp);
    string s = "";
    for (int i = 0; i < n; i++) s += arr[i].first;
    int zerocnt = 0, invcnt = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            invcnt += zerocnt;
        } else {
            zerocnt++;
        }
    }
    cout << invcnt << endl;
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
