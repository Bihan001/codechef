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
    string s;
    cin >> s;
    int pos1 = (s[0] == 'L' ? -1 : 1), pos2 = 0;
    for (int i = 1; i < n; i++) {
        int dir = s[i] == 'L' ? -1 : 1;
        pos1 += dir;
        pos2 += dir;
        if (abs(pos1) == 2 or abs(pos2) == 2) {
            cout << "YES" << endl;
            return;
        }
    }
    if (abs(pos1) == 2 or abs(pos2) == 2) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
