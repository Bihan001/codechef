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
    string s;
    cin >> s;
    int cnt = 0;
    for (int x = 1; x * x + x <= s.length(); x++) {
        int k = x * x + x;
        int i = 0, j = k - 1, zeros = 0, ones = 0;
        for (int l = 0; l < k; l++) {
            if (s[l] == '0')
                zeros++;
            else
                ones++;
        }
        while (j < s.length()) {
            if (ones == x) cnt++;
            if (j + 1 == s.length()) break;
            if (s[i] == '0')
                zeros--;
            else
                ones--;
            i++, j++;
            if (s[j] == '0')
                zeros++;
            else
                ones++;
        }
    }
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
